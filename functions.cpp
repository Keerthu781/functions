#include <iostream>
using namespace std;
int prime(int n);
int main()
{
    int n, i, flag=0;
    cout << "Enter a number: ";
    cin >> n;
    for(i=2; i<=n/2; ++i)
    {
        if (prime(i)==0)
        {
            if ( prime(n-i)==0)
            {
                cout << n << " = " << i << " + " << n-i << endl;
                flag=1;
            }

        }
    }
    if (flag==0)
      cout << n << " can not  be shown as sum of two prime numbers.";
    return 0;
}
int prime(int n)  {
  int i, flag=0;
  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  return flag;
}
