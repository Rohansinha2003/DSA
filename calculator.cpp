#include<iostream>
using namespace std;

int main() {

  int num1 , num2 , opt;

  cout << "Enter your first number";
  cin>>num1;
  cout << "enter the eoperator for addion 0 , for sub 1, for mul 2 , for div 3";
  cin>>opt;
   cout << "Enter your secound  number";
  cin>>num2;

  switch(opt){
    case 0:
    {
      cout<<num1+num2;
  }
  break;
    case 1:
    {
      cout<<num1- num2;
  }
  break;
  case 2: 
    {
      cout<<num1*num2;
    }
    break;
    case 3:
    {
        cout<<num1/num2;
    }
    break;
    default:
    {
        cout<<"invalid";
    }
    


  }
  

  return 0;
}