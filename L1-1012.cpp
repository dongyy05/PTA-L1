#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
  int n;
  vector<int>num;
  int s;
  cin >> n;
  while(n--)
    {
      cin >> s;
      num.emplace_back(s);
    }
  int a_1=0, a_2=0, a_3=0, a_4=0, a_5=0;
  int flag = 1, sum = 0;
  for(int i = 0; i < num.size(); i++)
    {
      if(num[i] % 2 == 0 && num[i] % 5 == 0)
	    a_1+=num[i];
      else if(num[i] % 5 == 1)
	{
	  a_2 += flag * num[i];
	  flag *= -1;
	}
      else if(num[i]%5 == 2)
	a_3++;
      else if(num[i]%5 == 3)
	{
	  a_4 += num[i];
	  sum++;
	}
      else if(num[i] % 5 == 4)
	{
	  a_5 = max(a_5, num[i]);
	}
    }
  if(a_1 == 0) cout << "N "; else cout << a_1 << " ";
  if(a_2 == 0) cout << "N "; else cout << a_2 << " ";
  if(a_3 == 0) cout << "N "; else cout << a_3 << " ";
  if(a_4 == 0) cout << "N "; else cout << fixed << setprecision(1) << (a_4*1.0) / sum << " ";
  if(a_5 == 0) cout << "N "; else cout << a_5;

  return 0;
}

// #include <stdio.h>
// int main() {
//     int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
//     int x2flag = 0, x4count = 0;
    
//     int count; scanf("%d", &count);
 
//     for(int i = 0, n; i < count; i++) {
//         scanf("%d", &n);
//         switch(n % 5) {
//             case 0: x1 += n % 2 ? 0 : n;                                break;
//             case 1: x2flag = x2flag == 1 ? -1 : 1; x2 += x2flag * n;    break;
//             case 2: x3 ++;                                              break;
//             case 3: x4 += n; x4count ++;                                break;
//             case 4: x5 = n > x5? n : x5;                                break;
//         }
//     }
 
//     if(x1 == 0)     printf("N ");   else printf("%d ", x1);
//     if(x2flag == 0) printf("N ");   else printf("%d ", x2);
//     if(x3 == 0)     printf("N ");   else printf("%d ", x3);
//     if(x4 == 0)     printf("N ");   else printf("%.1f ", x4 * 1.0 / x4count);
//     if(x5 == 0)     printf("N");    else printf("%d", x5);
 
// return 0;}

