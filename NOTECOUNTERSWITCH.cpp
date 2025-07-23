#include <iostream>
using namespace std;
int main() {
  int amount=1331;
  int note=0;
  int choice=1;
  while
  (amount>0 && choice<=7)
    {
  switch(choice)
    {
      case 1: note=500; 
      break;
      case 2: note=100; 
      break;
      case 3: note=50; 
      break;
      case 4: note=20; 
      break;
      case 5: note=10; 
      break;
      case 6: note=5; 
      break;
      case 7: note=1; 
      break;
    } //if should be inside while brackets
  if(amount>=note){   
    int count=amount/note;  //count is number of notes
    amount=amount%note; // to get remainder amount
    cout << note << " x " << count << endl; // 500 x 2
  }
    choice++; //should be outside switch and inside while block to continue the iterations
  }
}