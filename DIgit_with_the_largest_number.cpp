#include <iostream>
using namespace std;
int a , b, c;
int compare_num(int a, int b, int c);
void num_split(int input);

int main() {
	int input,result ;
	
	cin >> input ;
	
  num_split(input);
	
	result = compare_num(a, b, c);
	
	cout << result; 
}
void num_split(int input){
	//전역변수 a, b, c는 따로 선언할 필요 없이 여기서 사용하면 됩니다.
	//input 받은 3자리 정수를 나누는 과정을 짜자
	// 세자리 정수를 각가 한자리 정수로 나눠줄수 있게 변수 3개 선언
	// 1) 마지막 자리의 숫자를 구하자
	a = input % 10;
	b = (input / 10) % 10 ;
	c = (input % 10) % 10;
	
	
}
int compare_num(int a, int b, int c){
	
	int max;
	
	if(a > b and a>c)
		max = a;
	else if (b>a)
		max = b;
	else
		max = c;
	
	return max;
		
		
	
}










