#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
  vector<string> num;
  string arr[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
  string n;
  cin >> n;
  
  int sum = 0;
  for(auto& nums:n)
    {
      sum += nums - '0';
    }
  while(sum)
    {
      int len = sum % 10;
      num.push_back(arr[len]);
      sum /= 10;
    }
  int len1 = num.size();
  cout << len1;
  for(int i = len1-1; i >= 0; i--)
    {
      if(i != len1-1) putchar(' ');
      cout << num[i];
    }
  
}
  
