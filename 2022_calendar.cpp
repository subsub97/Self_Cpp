#include <iostream>
using namespace std;
void f()
{
	int i = 3;
	cout << i;
	if (--i)
		f();
}
int main()
{
	f();

	return 0;
}