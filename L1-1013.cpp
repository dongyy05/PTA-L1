#include<iostream>
#include<cmath>
using namespace std;
#define MAX 100005
int vis[MAX];

void While()
{
  vis[0] = 1; vis[1] = 1;
  for(int i = 2; i*i <= MAX; i++){
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

/*
#include<iostream>
#include<cmath>
using namespace std;
#define MAX 100005
int vis[MAX];

void While()
{
  vis[0] = 1; vis[1] = 1;
  for(int i = 2; i <= sqrt(MAX); i++){
    if(!vis[i])
      for(int j = i*2; j <= MAX; j+=i)
	    vis[j] = 1;
  }
}
int main() {
	While();
	int a, b; cin>>a>>b;
	int num = 0, num1 = 0;
	for(int i = 0; i < MAX; i++) 
		if(vis[i] == 0) {
			++num;		//判断区间的 
			if(num>=a && num<=b) {
				 ++num1; 	//够10个就换行 
				if(num1 != 1) putchar(' ');
				cout << i; 
				if(num1==10 && num!=b) {
					num1 = 0; putchar('\n');
				} 
			} 
		}
	
return 0; }
*/
