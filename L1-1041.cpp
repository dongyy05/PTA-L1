#include<iostream>
using namespace std;

struct Class
{
  string num;
  int seat;
  int exa_seat;
};

int main()
{
  int n;
  cin >> n;
  Class stu[n];

  for(int i = 0; i < n; i++)
    {
      cin >> stu[i].num >> stu[i].seat >> stu[i].exa_seat;
    }
  int p, t;
  cin >> p;
  while(p--)
    {
      cin >> t;
      for(int i = 0; i < n; i++)
        {
	  if(stu[i].seat == t)
	    cout << stu[i].num << " " << stu[i].exa_seat;
        }
      cout << endl;
    }
    
}
