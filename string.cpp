#include<iostream>
using namespace std;
 

int main()
{
    std:: string str="siv##a#kmh#sr#xyee#";
     str.erase(3,4);
    str.erase(4,1);
    str.erase(6,3);
     str.erase(8,1);
     

cout<<str;

 
    return 0;
}