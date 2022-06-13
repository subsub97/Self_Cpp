// struct 안에 sturct 구현하기
#include <iostream>
#include <cstring>
using namespace std;

struct date{
	int month;
	int day;
	int year;
};

struct Student {   
    int number;   
    char name[20];
    double grade;
    struct date date;
};

int main() {
	struct Student p1;
	cin >> p1.date.month >> p1.date.day >> p1.date.year;
	cin >> p1.number >> p1.name >> p1.grade;

	cout << "학번 : " << p1.number <<endl;
	cout << "이름 : " << p1.name <<endl;
	cout << "학점 : " << p1.grade <<endl;
	cout << "생년월일 : " << p1.date.year<<"/"<<p1.date.month<<"/"<<p1.date.day <<endl;
	return 0;
}
