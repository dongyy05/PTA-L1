#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> socre(m);
  vector<int> mark(m);
  vector<int> stu_score(m);
  for(int& i:socre)
    cin >> i;
  for(int& s:mark)
    cin >> s;
  int sum = 0;
  while(n--)
    {
      for(int i = 0; i < m; i++)
        {
	  cin >> stu_score[i];
	  if(stu_score[i] == mark[i])
	    sum += socre[i];
        }
      cout << sum << endl;
      sum = 0;
    }
}
