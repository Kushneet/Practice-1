#include <iostream>
using namespace std;
int main() {
 int n=234;
  int sum=0;
  int pro=1;
  while(n>0) {
    int remainder=n%10;
     sum= sum + remainder;
     pro=pro*remainder;
     n=n/10;
  }
  int answer=pro-sum;
  cout << answer ;
}