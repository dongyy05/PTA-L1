#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  while(n>1)
    {
      if(n%2 == 0)
	{
	  n /=2;
	  sum++;
	}
      else if(n%2==1)
	n = (3*n+1);
      
    }
  cout << sum;
}
