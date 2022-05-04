#include <iostream>
using namespace std;
int main()
{
  int num[10];

  for (int i = 0; i < 10; i++)
  {
    cin >> num[i]; //원하는 배열에 값 넣어주기
  }
  cout << num[2];
}