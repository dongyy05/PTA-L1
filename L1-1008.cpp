#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n, m,t;
  cin >> n >> m;
  vector<int> num;
  for(int i = 0; i < n; i++){
      cin >> t;
      num.push_back(t);
    }
  if(m>n) m %=n;
  int s = n-m;
  vector<int> left(num.begin(), num.begin()+s);
  vector<int> right(num.begin()+s, num.end());
  left.insert(left.begin(), right.begin(), right.end()); 
  for(auto i = 0; i < left.size(); i++)
  {
    cout << left[i];
    if(i != left.size()-1)
      putchar(' ');
  }
}
//对m和n取模做了说明，请移步至M-mod-N.md查阅

