#include <iostream>
using namespace std;
int Fibonaccinumber(int x);

int main() {
	int input,result;
	cin >> input;
	result = Fibonaccinumber(input);
	cout << result;
	return 0;
}

int Fibonaccinumber(int x){
	if (x<=1){
		return x;
	}
		return int (Fibonaccinumber(x-1)+Fibonaccinumber(x-2));
}