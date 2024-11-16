#include<iostream>
#include<cmath>
using namespace std;

struct stu
{
  string name;
  string num;
  int score;
};

int main()
{
  stu students[1000];
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
    {
      cin >> students[i].name 
	  >> students[i].num
	  >> students[i].score;
    }
  int maxl = students[0].score;
      int minn = students[0].score;
  int t=0, j=0;
  for(int i = 1; i < n; i++)
    {
      if(maxl < students[i].score)
      {
          maxl = students[i].score;
          t = i;
      }
      if(minn > students[i].score)
      {
          minn = students[i].score;
          j = i;
      }
    }
 cout << students[t].name << " " << students[t].num << endl
       << students[j].name << " " << students[j].num;
}
