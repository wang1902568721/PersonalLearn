#include <iostream>

using namespace std;

void useStaic()
{
	static int num = 10;
	num = (num + 1)%numeric_limits<int>::max();
	cout << num << endl;
}
void test()
{
	for (int i = 0; i < 10; i++)
	{
		useStaic();
	}
}
int main()
{
	test();
	return 0;
}