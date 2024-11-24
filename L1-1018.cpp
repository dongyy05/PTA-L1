#include<iostream>
using namespace std;

char max(int winb,int winc,int winj)
{
  if(winb >= winj && winb >= winc) return 'B';
  if(winc >= winj && winc > winb) return 'C';
  return 'J';
}

int main()
{
  int n;
  cin >> n;
    int p = n;
  char a, b;
  int AwinB=0, AwinC=0, AwinJ = 0;
  int BwinB=0, BwinC=0, BwinJ = 0;
  while(n--)
    {
      cin >> a >> b;
      if(a == 'B' && b == 'C') AwinB++;
      if(a == 'C' && b == 'J') AwinC++;
      if(a == 'J' && b == 'B') AwinJ++;
      if(a == 'B' && b == 'J') BwinJ++;
      if(a == 'C' && b == 'B') BwinB++;
      if(a == 'J' && b == 'C') BwinC++;
      
    }
  int suma = AwinB+AwinC+AwinJ;
  int sumb = BwinB+BwinC+BwinJ;
  int tie = p - suma - sumb;
  cout << suma << " "<< tie <<" "<< sumb << endl;
  cout << sumb <<" "<< tie <<" "<< suma << endl;
  cout << max(AwinB, AwinC, AwinJ) << ' '<< max(BwinB, BwinC, BwinJ);
}
