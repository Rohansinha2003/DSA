
#include <iostream>
using namespace std;

int main() {
    
    int arr[]={1,2,1,1,3,2,1,1,3};
    int count=0;
    int n;
    cout<<"enter the number";
    cin>>n;
    
    
   
    for(int i=0; i < 9; i++) {
        if (arr [i]==n){
            count++;
        }
        }
       cout<<count++;
    
    
   return 0;
}
