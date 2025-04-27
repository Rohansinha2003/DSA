#include <iostream>
using namespace std;

int main() {

  int photo;

  cout << "Enter your choice (1-2)";
  cin>>photo;

  switch(photo){
    case 1:
    {
      cout<<"yes";
  }
  break;
    case 2:
    {
      cout<<"no";
  }
  break;
  default :
    {
      cout<<"invalid";

    }
    


  }
  

  return 0;
}