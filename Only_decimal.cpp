#include <iostream>
using namespace std;
// only decimal point

int main() {

	float num1;
	float result;
	cin >> num1 ;
	
	result = num1 - int(num1) ;
	
	cout.precision(3) ;
	cout << result ;

}