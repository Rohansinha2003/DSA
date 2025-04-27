#include <iostream>
using namespace std;

int main()
{
int num ;
cout<<"Enter the number";
cin>>num;

int sum=0;

while(num!=0){

int lastdigit = num % 10;
sum = sum*10 + lastdigit ;
num = num/10;
}
cout<<"reverse of number is="<<sum;

return 0;

}