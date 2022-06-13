//3. Rectangle area

#include <iostream>

using namespace std;

struct point{
	int x;
	int y;
	int key;
};

int main() {
	int n=0; // n개의 좌표 값을 받기 위함
	int max=0;
	int area=0;
	int point1=0;
	int point2=0;
	
	cin >> n;
	
	struct point p[n]; // 배열 스트럭쳐를 이용하기
	
	for(int i=0; i<n ; i++){
		
		cin >> p[i].x >> p[i].y; // 각 인데스마다 다른 좌표를 갖게하기
		p[i].key = i+1; // 구분하기 위한 key값은 cin이 아닌 i 값으로 대체 가능
		
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = i; j < n;j++){
			// 직사각형 넓이
			area = abs(p[i].x - p[j].x) * abs(p[i].y - p[j].y);
			if(area > max){
				max = area;
				point1 =i+1;
				point2 =j+1;
			}
		}
	}
	cout << point1<<" " << point2 <<endl; 
	cout << max;
	return 0;
}