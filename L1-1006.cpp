#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int b=0;int s = 0;int g = 0;

  g = n % 10;
  s = (n/10)%10;
  b = n / 100;

  for(int i = 0; i < b; i++)
    cout << "B";
  for(int i = 0; i < s; i++)
    cout << "S";
  for(int i = 1; i <= g; i++)
    cout << i;
  cout << endl;
}
	
