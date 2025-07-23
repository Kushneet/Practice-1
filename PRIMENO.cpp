// simple approach
#include <iostream>
using namespace std;
int main() {
  int n;     
    cin >> n;

    for(int i=2;i<=n;i++) // every number is divisible by 1
      {
        if(n%i==0)
        {
           cout <<  "not Prime" << endl;
           break; /* helps in getting out of the loop and is no more
                   solved for further iteration */
        }
        else cout << "prime" << endl;
        break;
      }
    
    return 0;
}
// BOOL APPROACH
#include <iostream>
using namespace std;
int main() {
  int n;     
    cin >> n;
    bool isprime=1; // 1 is true

    for(int i=2;i<=n;i++) // every number is divisible by 1
      {
        if(n%i==0)
        {
           cout <<  "not Prime" << endl;
           isprime=0;
           break; 
        }
        
      }
    if(isprime==0)
    {
      cout << "not prime" << endl;
    }
    else cout << "is prime" << endl;
    return 0;
}