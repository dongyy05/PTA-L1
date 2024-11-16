#include<iostream>
#include<cstring>
using namespace std;
int a[300] = {0};

int main()
{
  int n;
  cin >> n;

  string v;
  int p = 0, t = 0;
  bool y = false;
  while(n--)
    {
      cin >> v;
      int len = v.length();

      memset(a, 0, sizeof(a));
      for(int i = 0; i < len; i++)
	{
	  a[v[i]]++;
	  if(v[i] == 'P') p = i;
	  if(v[i] == 'T') t = i;
	}
      if(a['P'] + a['T'] + a['A'] != len) y = true;
      else
	{
	  if(t - p == 2 && (p == len - t - 1))
	    {
	      cout << "YES" << endl;
	    }
	  else if ((t-p-1)*p == len - t - 1 && t - p >= 3) cout << "YES" << endl;
	  else y = true;
	}

      if(y) cout << "NO" << endl;
    }
  return 0;
}
  
