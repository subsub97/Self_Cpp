#include <iostream>
using namespace std;
int main() {
	int sum, number, UpperLimit;
	sum = 0;
	number = 1;
	
	cin >> UpperLimit;
	while (number <= UpperLimit)
	{
	if (number % 2 == 1)
		{
			sum = sum + number;
		}
	number = number + 1;
	}
	cout << "The sum of all odd integer between 1 and " << UpperLimit << " is " << sum ;
}