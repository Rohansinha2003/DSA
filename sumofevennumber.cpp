#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;


    for (int i = 0; i <= n; i=i+2) {
        if (i % 2 ==0)
        {
          sum += i;
        }
       
    }

    cout << "Sum = " << sum;
    return 0;
}