#include <iostream>
#include <cstdlib> // 절대값 abs를 사용 할 수 있게해주는 헤더파일 
using namespace std;
double raiseToPow (double , int);

double raiseToPow ( double x , int power )
	{
	double result ;
	int i ;
	result = 1.0 ;
	for ( i = 1 ; i <= abs(power) ; i ++ ) // braces first
	{
		if( power < 0){
			result /= x;
			
		}
		else {
	result *= x ;// result = result *x
		}
		
	}
	return ( result ) ;
}
int main(){
	
	double x ;
	int power ;
	
	cin >> x >> power ;
	
	cout << x << " raise to power " << power << " is equal to " << raiseToPow ( x , power ) ;
	 
	

	return 0; 
}