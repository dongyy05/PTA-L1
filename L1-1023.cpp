#include<iostream>
using namespace std;

int main()
{
  int first, other;
  cin >> first;
  for(int i = 1; i < 10; i++)
    {
      cin >> other;
      while(other--)
	{
	  putchar('0'+i);
	    for(;first;first--)
	      {
		putchar('0');
	      }
	}
    }
}
