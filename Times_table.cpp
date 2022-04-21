#include <iostream>
using namespace std;
int main() {
	int n,sum;
	
	while(true){
		cin >> n ;
		if(n != 0){
			cout << "구구단" << n<< " 단\n";
			for(int i=1; i <= 9; i++){
				sum = n * i;
				cout << n << "x" << i << ":" << sum << "\n";
				
			}
			continue;
		}
		else;{
			cout << "종료";
			break;
		}
	
	}

	return 0;
}