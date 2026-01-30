#include <iostream>
#include <climits>
using namespace std;

int getmax(int num[], int n)
{
    int max = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int main()
{
    int size = 8;
    int num[100];

    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getmax(num, size) << endl;

    return 0;
}
