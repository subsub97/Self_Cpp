#include <iostream>
using namespace std;
int main() {
	//윤년 구하기
	int year = 0;
	cin >> year;
	if( year <= 0){
		cout << "0";
	}
	else{
	if (year %400 ==0){
		cout << "1";
		return 0;
	}
	if(year%4 == 0){
		if(year%100 ==0 ){
			cout << "0";
		} else{
			cout << "1";
		}
	} else{
		cout <<"0";
	}}
				 return 0;
}