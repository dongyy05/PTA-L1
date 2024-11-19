#include<iostream>
using namespace std;
int main()
{
    string a1,a2;
    long long b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    long long sum = b1, sum2 = b2;
    for(auto i:a1) if(i==(char)b1+'0') {sum = sum*10 + b1;}
    for(auto i:a2) if(i==(char)b2+'0') {sum2 = sum2*10 +b2;}
    cout <<sum / 10 + sum2/10;
    return 0;
}
