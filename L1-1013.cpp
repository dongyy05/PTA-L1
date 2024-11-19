#include<iostream>
#include<cmath>
using namespace std;
#define MAX 100005
int vis[MAX];

void While()
{
  vis[0] = 1; vis[1] = 1;
  for(int i = 2; i*i <= sqrt(MAX); i++){
    if(!vis[i])
      for(int j = i*i; j <= MAX; j+=i)
	vis[j] = 1;
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  While();
  int sum = 0, sum2 = 0;
  for(int i = 0; i < MAX; i++)
    {
      if(!vis[i])
	{
	  ++sum;
	  if(sum >= n && sum <= m)
	    {
	      ++sum2;
	      if(sum2!=1) putchar(' ');
	      cout << i;
	      if(sum2 == 10 && sum != m){
		printf("\n");
		sum2 = 0;
	      }
	    }

	}
  
    }
}
