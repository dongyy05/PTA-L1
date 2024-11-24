#include<iostream>
using namespace std;

int main()
{
  int C1, C2;
  cin >> C1 >> C2;
  double t = (C1-C2)*0.1 / 100;

  int h = 0, m = 0, s = 0;
  h+= t / 3600; t -= h*3600;
  m+= t / 60; t -= m*60;
  s+= x;
  if(x-(int)x >= 0.5 - 1e-6)
    s+=1;
  printf("%02d:%02d:%02d",h,m,s);
}
