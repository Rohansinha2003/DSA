#include <iostream>
using namespace std;

int main() {
    
    int n[]={7,8,3,5,2,9};
    
    
    n[4]=4;
    
   
    for(int i=0; i < 6; i++) {
        cout << n[i] << " ";
    }
    
    return 0;
}
