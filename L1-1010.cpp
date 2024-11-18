#include<iostream>
using namespace std;
#include<vector>
int main()
{
  int n, m;
  int s = 0;
  while(cin >> n >> m)
    {
      if(n*m){
      cout << (s==0?"":" ") << n*m << " "<< m-1;
      s++;}
      else if(!s) cout << "0 0";
    }
}
  
// 对于一组数来说可以运用基本输入输出来做，使用while进行每一次的输入
