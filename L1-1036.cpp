#include<iostream>
#include<deque>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
  int n;
  char d;
  cin >> n >> d;

  deque<char> matrix(n, d);
  float p;
  p = static_cast<int>(ceil(n * 0.5));
  for(int i = 0; i < p; i++)
    {
      for(auto j = matrix.begin(); j != matrix.end(); ++j)
	{
	  if(i==0||i==p-1)
	    cout << *j;
	  else if(j==matrix.begin()||j==matrix.end()-1)
	    cout <<*j;
	  else cout <<' ';
	}
      cout<<endl;
      
    }
}
