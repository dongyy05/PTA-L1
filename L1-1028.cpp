#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  string s1, s2, max_y="0", min_y="9", max_n, min_n;
  while(n--)
    {
      cin >> s1 >> s2;
      if(!(s2 >="1814/09/06" && s2 <= "2014/09/06")) continue;
      sum++;
      if(s2 > max_y) {max_y = s2, max_n = s1;}
      if(s2 < min_y) {min_y = s2, min_n = s1;}
    }
  cout << sum;
  if(sum) cout <<" " << min_n << " " << max_n <<endl;
    return 0;
}
