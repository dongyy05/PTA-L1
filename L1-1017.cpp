#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str, q = "";
  int b, r = 0;
  cin >> str >> b;
  for(char a:str)
    {
      r = r*10+a -'0';
      q += r / b + '0';
      r %= b;
    }
  while(!q.empty() && q.front()=='0') q.erase(q.begin());
  printf("%s %d", q.size()==0?"0":q.c_str(), r);
}
