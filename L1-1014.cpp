#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string date[7] ={"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main()
{
    string n,m;
    cin >> n >> m;
    int mp = min(n.size(),m.length());
    bool flag = false;
    for(int i = 0; i < mp; i++)
    {
        if(n[i] == m[i] && n[i]>='A'&&n[i]<='G' && flag == false)
        {
            cout << date[(int)(n[i]-'A')] << " ";
            flag = true;
        }
        else if(n[i] == m[i] && (isdigit(n[i])||(n[i]>='A'&&n[i]<='N'))&&flag)
        {
            if(n[i] >='0'&&n[i] <='9') 
            {
                printf("%02d:", n[i]-'0');
                break;
            }
            if(n[i]>='A'&&n[i]<='N')
            {
                cout << (int)n[i]-'A'+10 <<":";
                break;
            }
        }
    }
     cin >> n >> m;
    mp = min(n.size(),m.length());
    for(int i = 0; i < mp; i++)
        {
            if(isalpha(n[i])&&(n[i] == m[i]))
            {
                printf("%02d", i);
            }
        } 
    }
