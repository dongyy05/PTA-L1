#include<iostream>
#include<stack>
using namespace std;

int main()
{
  string sen;
  stack<string> word;

  while(cin >> sen)
    {
      word.push(sen);
    }
  int t = 0;
  while(!sen.empty())
    {
      if(t==0?"":" ")
	cout << word.top();
      word.pop();
    }
}
