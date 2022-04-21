#include <iostream>
using namespace std;
int i = 7;
int swap (int i);
int main() {
	int i;
	cin >> i; 

cout << ::i <<  " " << i;

i = swap(i);

cout <<"\n"<< i << " " << ::i;
	return 0;
}

int swap (int i){
	
	return i;
	
}
//바뀌기 전 변수 값 출력하고 