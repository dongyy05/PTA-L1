#include<iostream>
using namespace std;

int main()
{
  int p;
  cin >> p;

  int a, a1, b, b1;
  int index = 0, count = 0;
  
  for(int i = 0; i < p; i++)
    {
      cin >> a >> a1 >> b >> b1;

      if(a1 == a + b && a1 != b1)
	index++;
      if(b1 == a + b && b1 != a1)
	count++;
    }
  cout << count << " " << index;
}
