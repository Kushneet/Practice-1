#include <iostream>
using namespace std;//
long long factorial(int n)  // long long for long integer type answer
{
    long long fact=1;  //topmost stack in a function as it is to be used is factoria;
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    return fact;
}
long long nCr(int n,int r)
{
    long long a = factorial(n);
    long long b = factorial(r);
    long long c = factorial(n-r);
    return a/(b*c);
}
int main()
{
    int n,r;
    
   cout << "n: " ;
   cin >> n;
   cout << "r: " ;
   cin >> r;
   if(r>n || n<0 || r < 0) // imp to get accurate answers even for larger numbers
   cout << "Invalid output. Ensure that 0<= r <=n." << endl;
   else{
   cout << "value of nCr is: " << nCr(n,r);
   }
   return 0;
}