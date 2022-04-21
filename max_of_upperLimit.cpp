#include <iostream>
using namespace std;
int main() {
	int sum, number , UpperLimit ;
	sum = 0 ;
	number = 1 ;
	
	cout << "Please enter the upper limit for which you want the sum" <<endl ;
	cin >> UpperLimit;
	
	while (number <= UpperLimit)
	{
	sum = sum + number ;
	number = number +1 ;
	}
	
	cout << "The sum of the first " << UpperLimit << " integer is " << sum ;
}
//65,535까지 정상값 출력 할 수 있습니다.