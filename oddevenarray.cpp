#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {1, 2, 1, 1, 3, 2, 1, 1, 3};
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
        else if (arr[i] % 2 == 1)
        {
            count1++;
        }
        else
        {
            cout << "invalid";
        }
    }
    cout <<"even:"<< count<<endl;
    cout <<"odd:"<< count1<<endl;
    return 0;
}