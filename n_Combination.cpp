#include <iostream>
using namespace std;

int combination(int n, int r);
double factorial(int n);

int main() {
	int a, b;
	cin >> a >> b;
	cout << "C(" << a << ", " << b << ") is " << combination(a,b) << endl;
	return 0;
}
//2. nCombinationr
//nCr = n!/(n-r)!*r!
double factorial(int n){
	double result;
	result = 1.0;
	//팩토리얼 연산식 세우기
	for(int i = 1 ; i <= n ; i++)
	{result *= i ;}
	
	return result;
}

int combination(int n ,int r)
{
	//숫자를 받아오겟지 그걸 어떻게 사용을 할까? 
	
	return factorial(n)/((factorial(n-r))*factorial(r));
	
}