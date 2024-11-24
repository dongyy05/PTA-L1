#include<iostream>
using namespace std;
int num[4] = {1, 2, 3, 4};
int main()
{
  int n;
  cin >> n;
  getchar();
  string str;
  char s;
  while(n--)
    {
      getline(cin, str);
      for(int i = 0; i < str.size(); i++)
	{
	  if(str[i] == 'T')
	    s = str[i-2];
	}
      	cout << num[s-'A'];   
    }
    cout << endl;
}
