#include <iostream>
#include <math.h>
using namespace std;
bool is_prime(int n)
{
  int flag = 1;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      flag = 0;
      break;
    }
  }
  return flag;
}

int main()
{
  int n, result;

  for (int n = 2; n <= 100; n++)
  {
    result = pow(2, n) - 1;

    if (is_prime(result) ==1 && is_prime(n)==1)
    {
      printf("all prime 2^n-1=%d n=%d prime(2^n-1)=%d prime(n)=%d\n", result, n, is_prime(result), is_prime(n));
    }
    
    else  if (is_prime(result) ==0 && is_prime(n)==1)
    {
      printf("_error_ 2^n-1=%d n=%d prime(2^n-1)=%d prime(n)=%d\n", result, n, is_prime(result), is_prime(n));
    }
    
  }

  return 0;
}
