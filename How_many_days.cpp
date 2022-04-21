#include <iostream>
using namespace std;
int main() {
	int month;
	
	cin >> month;
	
	switch(month){
		case 1 : 
			cout << "The number of days in 1 is 31";
			break;
		case 2:
			cout << "The number of days in "<< month  << " is 28";
			break ;
		case 3:
			cout << "The number of days in "<< month  << " is 31";
			break;
		case 4:
			cout << "The number of days in "<< month  << " is 30";
			break;
		case 5:
			cout << "The number of days in "<< month  << " is 31";
			break;
		case 6:
			cout << "The number of days in "<< month  << " is 30";
			break;
		case 7:
			cout << "The number of days in "<< month  << " is 31";
			break;
		case 8:
			cout << "The number of days in "<< month  << " is 31";
			break;
		case 9:
			cout << "The number of days in "<< month  << " is 30";
			break;
		case 10:
			cout << "The number of days in "<< month  << " is 31";
			break;
		case 11:
			cout << "The number of days in "<< month  << " is 30";
			break;
		case 12:
			cout << "The number of days in "<< month  << " is 31";
			break;
	}
	return 0;
}