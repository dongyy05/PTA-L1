#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int n1, b, t, n2;
    while(m--)
    {
        bool flag = false;
        cin >> n1 >> b >> t >> n2;
        if((n1 > n2 && b == 0)||(n1 < n2&&b == 1))
        {
            flag = true;
        }
        if(n < t) 
            cout << "Not enough tokens.  Total = " << n << "."<< endl;
        else if(flag)
        {
            n+=t;
            cout << "Win " << t << "!  Total = "<< n << "."<< endl;
        }
        else if(!flag)
        {
            n -= t;
            cout << "Lose " << t << ".  Total = " << n << "." << endl; 
        }
        if(n == 0) 
        {
            cout <<"Game Over." << endl;
            break;
        }
    }
}
