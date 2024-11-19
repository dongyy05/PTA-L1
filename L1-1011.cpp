#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long  a, b, c;
  int i = 1;
  while(i!=n+1)
    {
      cin >> a >> b >> c;
      if(a+b>c)
	cout << "Case #" << i << ": true" << endl;
      else cout << "Case #" << i << ": false" << endl;
      i++;
    }
}
