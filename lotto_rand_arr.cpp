#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
  int lotto[6];
  int i = 0;

  for (int i = 0; i < 7; i++)
  {

    lotto[i] = rand() % 50;
    if (i == 6)
    {
      lotto[i] = rand() % 100;
    }

    cout << i + 1 << "번째 로또번호:" << lotto[i] << "\n";
  }

  return 0;
}