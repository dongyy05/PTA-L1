#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string Mars_n[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string More_Mars_n[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};


int main()
{
  int a;
  cin >> a;
  cin.ignore();
  while (a--)
    {
      string n;
      getline(cin, n);
      bool flag = std::all_of(n.begin(), n.end(), [](char c) { return isdigit(c); });
      if (flag)  
        {
	  int t = stoi(n);
	  if (t < 13)
            {
	      cout << Mars_n[t] << endl;
            }
	  else
	    {
	      int high = t / 13;
	      int low = t % 13;
	      if(low == 0) // 地位为0时
		cout << More_Mars_n[high] << endl;
	      else cout << More_Mars_n[high] << " " << Mars_n[low] << endl;
	    }
	}
      else  
	{
	  vector<string> str;
	  auto pos = n.find(' ');
	  if(pos != string::npos)
	    {	    
	      str.push_back(n.substr(0, pos)); // 高位
	      str.push_back(n.substr(pos+1)); // 低位
	    }
	  else str.push_back(n);
	  int value = 0;
	  for (int i = 1; i < 13; i++)// 高位
	    {
	      if (More_Mars_n[i] == str[0])
		{
		  value += i*13;
		  break;
		}
	    }
	  for (int i = 0; i < 13; i++) //低位
	    {
	      if (Mars_n[i] == str.back())
		{
		  value += i;
		  break;
		}
	    }
	  cout << value << endl;
	}
    }
  return 0;
}
