// Given two arrays, check if one array is
// stack permutation of other.
#include <bits/stdc++.h>
using namespace std;
// Input Array
int input[] = {1,2,3,4}; //stack is normal
// Output Array
int output[] = {1,2,3,4};

int n1 = 4;
void print_arr(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i];
  }
  puts("");
}

void print_reverse_arr(int a[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    cout << a[i];
  }
  puts("");
}
// function to check if input array is
// permutable to output array
bool checkStackPermutation(int ip[], int op[], int n)
{
  // we will be pushing elements from input array to stack uptill top of our stack
  //  matches with first element of output array
  stack<int> s;

  // will maintain a variable j to iterate on output array
  int j = 0;

  // will iterate one by one in input array
  for (int i = 0; i < n; i++)
  {
    // pushed an element from input array to stack
    s.push(ip[i]);
    // if our stack isn't empty and top matches with output array
    // then we will keep popping out from stack uptill top matches with
    // output array
    while (!s.empty() and s.top() == op[j])
    {
      s.pop();
      // increasing j so next time we can compare next element in output array
      j++;
    }
  }

  // if output array was a correct permutation of input array then
  // by now our stack should be empty
  if (s.empty())
  {
    return true;
  }
  return false;
}

void prem(int *arr, int i, int n)
{
  int j;
  if (i == n)
  {
    if (checkStackPermutation(input, arr, n + 1))
    {
      /*
      cout << "original" << endl;
      print_reverse_arr(input, n + 1);
      cout << "output" << endl;
      */
      //print_reverse_arr(arr, n + 1);
      print_arr(arr, n + 1);
    }
  }
  else
  {
    for (j = i; j <= n; j++)
    {
      swap(arr[i], arr[j]);
      prem(arr, i + 1, n);
      swap(arr[i], arr[j]);
    }
  }
}

// Driver program to test above function
int main()
{
  prem(output, 0, n1 - 1);


  /*
  cout<<"original"<<endl;
  print_reverse_arr(input,n1);
  puts("");

  cout<<"is track permutation"<<endl;
  prem(input, 0, n1 - 1);
  */
  return 0;
}