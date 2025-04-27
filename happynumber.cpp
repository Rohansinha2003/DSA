#include <iostream>
using namespace std;
int main()
{
    int num;
    int lastdigit;
    int squre = 0;
    cout << "enter the number" << endl;
    cin >> num;
    while (num >= 10)
    {
        int sum = 0;
        while (num != 0)
        {
            int lastdigit = num % 10;
            squre = lastdigit * lastdigit;
            sum += squre;
            num = num / 10;
        }
        num = sum;
    }
    cout << num;
    if (num == 1)
    {
        cout << "is a happy number";
    }
    else if (num < 10 && num != 7)
    {
        cout << "is not a happy number";
    }
    else
    {
        cout << "is a happy number";
    }
    return 0;
}