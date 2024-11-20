#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    int a[18] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char p[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int x = 0, y = 0 ;
    cin >> n;
    getchar();

    string s;
    
    while(n--)
    {
        getline(cin, s);
        int sum = 0;
        for(int i = 0; i < s.size()-1;i++)
        {
            if(!(s[i] > '0' || s[i] < '9')) {x = 1;break;}
            else sum += (s[i]-'0') * a[i];
        }
        if(s[17] != p[sum % 11] || x == 1) {y = 1; cout << s << endl;}
        
    }
    if(y == 0)
        cout << "All passed" << endl;
}
