#include<iostream>
#include<vector>
#define MAX 100005
using namespace std;

vector<bool>a(MAX, true);

auto prime()
{
  a[0] = false, a[1] = false;
  for(int i = 2; i*i <= MAX; i++)
    {
      if(a[i])
	for(int j = i * i; j <= MAX; j += i)
	  a[j] = false;
    }
  return a;
}

int main()
{
  prime();
  int n;
  cin >> n;
  int sum = 3;
  int num = 0;
  for(int i = 0; i <= n; i++)
    {
      if(a[i]){
	if(i - sum == 2) num++;
	sum = i;
      }
    }
  cout << num;
}
