#include <iostream>
using namespace std;
int Factorial(int x);

int main() {
	int x,result;
	cin >> x;
	result = Factorial(x);
	
	cout << result ;
	
	return 0;
}

int Factorial(int x){
	if(x <= 1){
		return 1;
	}
	else{
		return int( x * Factorial(x-2));
	}
	
}