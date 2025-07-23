#include <iostream>
using namespace std;
int main() {
  int n;      // 0 1 1 2 3 5 8 n= (n-1) + (n-2) 
    cin >> n;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++)
      {
        int third=a+b;         
        cout << third << " ";  
         a=b;
         b=third;
        
      }
    
    return 0;
}