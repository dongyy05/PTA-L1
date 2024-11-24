#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();
    string str;
    while(n--)
    {
        getline(cin, str);
        if(str.size() < 6)
        {
            cout << "Your password is tai duan le." << endl;
        }
        else
        {
            bool b = 0, b1 = 0, b3 = 0;
            for(auto& i:str)
            {
                if((i >= 'A' && i <= 'Z')|| (i >= 'a' && i <= 'z'))
                {
                    b = 1;
                }
                else if(i >= '0' && i <= '9')
                {
                    b1 = 1;
                }
                else if(i == '.') 
                {
                    continue;
                }
                else 
                {
                    cout << "Your password is tai luan le." << endl;
                    b3 = 1;
                    break;
                }
            }
            if(b3) continue;
            if(b&&b1) cout << "Your password is wan mei." << endl;
            else if(b) cout << "Your password needs shu zi." << endl;
            else cout << "Your password needs zi mu." << endl;
        }
    }
}
