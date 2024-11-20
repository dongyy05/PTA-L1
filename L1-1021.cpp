#include<iostream>
#include<string>
using namespace std;

struct mpt
{
  int no;
  int num;
};
void count(string n)
{
  mpt digit_count[10];
  for(int i = 0;i<10;i++)
    {
      digit_count[i].no = i;
      digit_count[i].num = 0;
    }
  for(char ch : n)
    {
      digit_count[ch - '0'].num++;
    }
  
  for(int i = 0;i<10;i++)
    {
      if(digit_count[i].num == 0)
	continue;
      cout << digit_count[i].no << ":" << digit_count[i].num << endl;
    }
}

int main()
{
  string n;
  cin >> n;
  count(n);
  return 0;
}
