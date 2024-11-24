#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
  int n, m, a, b, c;
  cin >> n >> m >> a >> b >> c;
  int num[m];
  
  while(n--)
    {
      for(int i = 0; i < m; i++)
	{
	  cin >> num[i];
	  if(num[i] >= a && num[i] <= b)
	    {
	      num[i] = c;
	    }
	  if(i != 0) putchar(' ');
        printf("%03d", num[i]);
      }
      cout << endl;
    }
}
