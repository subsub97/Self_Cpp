#include <iostream>
using namespace std;
int main() {
	int num,sum = 0;
	cin >> num;
	
	int average[num-1];
	for(int i =0;i < num; i++){
		cin >> average[i];
		sum += average[i];
	}
	cout <<"학생들의 성적 평균은 "<< sum /num<<"점 입니다.";
	
	return 0;
}