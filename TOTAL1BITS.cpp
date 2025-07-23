#include <iostream>
using namespace std;
int main() {
 int n=101; // integer is taken ... BINARY 1100101
  int count=0;
  while(n!=0) {//& is a binary operator converting n to binary digit 
    if(n&1){ // if last bit is 1; it will return 1 count 
      count++; // n is the last bit of the digit 
    }
    n=n>>1; // n right shifting by 1 to bring next to last bit
  }
  cout << count << endl;
}