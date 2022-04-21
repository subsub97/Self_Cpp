#include <iostream>
using namespace std;
int main() {
	int number = 1;
	bool is_prime ;
	int upperLimit = 0;
	
	cin >> upperLimit;
	
	while(number <= upperLimit){
		
		if(number <= 1){
			is_prime = false;
		}
		else{
			int a =2;
			if(a=2){
				is_prime = 1;
			}
			while(a <= number-1){
				if(number%a==0){
					is_prime = 0;
					break;
				}
				else{
					is_prime=1;
				}
				a++;
				// is_prime 참이거나 거짓인경우 식 세우기
			}										
		}
	if(is_prime){
		cout << number <<" ";
	}
	number++;
	}
	
	return 0;
}