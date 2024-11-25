#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  long long a, b, x;
  cin >> a >> b >> x;
  a = a + b;
  string s;
  while(a)
    {
      s += (char)(a%x+'0');
      a /= x;
    }
  if(s.empty()) s += '0';
  reverse(s.begin(), s.end());
  cout << s << endl;
}
