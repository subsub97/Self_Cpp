//삼각함수를 구하기
#include <iostream>
#include <cmath>

//pi고정값 사용하는법
#define PI 3.141592

using namespace std;
int main() {
	int n;
	cin >> n;
	
	double a,b,c;
	a = sin(n*PI/180);
	b = cos(n*PI/180);
	c = tan(n*PI/180);
	
	cout << a <<'\n' << b << '\n' << c;
	
	return 0;
}