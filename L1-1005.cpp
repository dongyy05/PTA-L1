#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX 500005
vector<int> vis(MAX, 1);

void While(int n) // 打表
{
  while(n!=1)
    {
      if(n % 2 == 0) {n /= 2; vis[n] = 0;}
      else {n = n*3+1;}
    }
}
int main()
{
  vector<int> a;
  int n;
  cin >> n;
  int p;
  while(n--)
    {
      cin >> p;
      a.push_back(p);
      While(p);
    }
  sort(a.begin(), a.end(), greater<int>()); // greater<type>()为降序排列
  int len = a.size();
  int s = 0;
  for(int i = 0; i < len; i++)
    {
      if(vis[a[i]]){
	cout << (s==0?"":" ") << a[i]; //比较抽象但好理解，充分利用三目表达式的极简性
	s++;
      }
    }
  return 0;
}
      
