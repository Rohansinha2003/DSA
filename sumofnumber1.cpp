#include<iostream>
using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i < 51; i++) {
        sum1 += i;
    }
    for (int j = 50; j > 0; j--)
    {
        sum2 += j;
    }
    cout << (sum1 + sum2)/2;
    return 0;
}