#include <iostream>
using namespace std;

int main()
{

  char x = 'a';

  cout << "select your colour r,b,g,y";

  cin >> x;

  switch (x){
  
  case 'r':
  {
    cout << "my choise is red";
  }
  break;
  case 'b':
  {
    cout << "my choise is blue";
  }
  break;
  case 'g':
  {
    cout << "my choise is green";
  }
  break;
case 'y':
{
  cout << "my choise is yellow";
}
break;

default:
{
  cout << "your fashion sense is phethatic";
}
  }


return 0; }
