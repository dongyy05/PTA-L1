#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
  int n;
  string num,num2, num3;
  cin >> n;
  
  num = to_string(n);
  
  while(num.length() < 4)
    num = "0" + num;
  
  if(num[0] == num[1] && num[0] == num[2] && num[0] == num[3])
    {
      cout << num <<" - " << num <<" = 0000";
      return 0;
    }
  
  do
    {
      num2 = num;
      num3 = num;
      sort(num2.begin(), num2.end());
      sort(num3.begin(), num3.end(), greater<int>());
      int result = stoi(num3) - stoi(num2);
      
      cout << num3 << " - " << num2 << " = " << setw(4)<< setfill('0') << result << endl;
      num = to_string(result);

      while(num.length() < 4){
	num = "0" + num;
      }
    } while (num!="6174");
  return 0;
}

