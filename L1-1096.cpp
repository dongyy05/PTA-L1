#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int num;
        cin >> num;
        bool b = true;
        for(int i = 1;i <= num && b;++i)
        {
            if(num % i != 0) continue;
            for(int j = i+1;j <= num && b;++j)
            {
                if(num % j != 0) continue;
                for(int k = j+1;k <= num && b;++k)
                {
                    if(num % k != 0) continue;
                    for(int h = k+1;h <= num && b;++h)
                    {
                        if(num % h != 0) continue;
                        if((i + j + k + h) % num == 0)
                        {
                            b = false;
                        }
                    }
                }
            }
        }
        if(b)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
    return 0;
}
