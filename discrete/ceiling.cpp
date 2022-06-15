#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n, k;
  bool n_flag = 1;
  bool eq;
  int a = ceil(0.5);
  for (int n = 1; n <= 100; n++)
  {
    for (int k = 1; k <= 100; k++)
    {
      eq = ceil((double)(n) / k) == floor(((double)(n - 1) / k) + 1);
      if (eq)
      {
        //cout << "n=" << n << " k=" << k << " eq=" << eq << endl;
      }

      else
      {
        cout << "error";
        n_flag = 0;
        break;
      }
    }

    if (n_flag == 0)
    {
      break;
    }
  }

  if(n_flag==1){
    cout<<"right";
  }

  return 0;
}