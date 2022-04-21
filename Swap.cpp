#include <iostream>
using namespace std;

void func_swap(int &a,int &b){
	
	int temp = a;
	a = b;
	b = temp;
	
}

int main() {
	int a ;
	int b ;
	
	cin >> a >> b ;
	
	
	
	func_swap(a,b);
	
	cout << "\na : " << a;
	cout << "\nb : " << b;
	return 0;
	
	
	
	
	return 0;
}