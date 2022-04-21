#include <iostream>
// 아스키코드에 관하여 알아보기

using namespace std;
int main() {
	
	char ch ;
	std::cin >> ch; //std:: 가 필요하다.
	
	//
	std:: cout<< char(ch-32); // char로 괄호를 만들어주지 않으면 정수가 출력된다.
	
	

	
	return 0;
}