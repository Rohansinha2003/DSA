#include <iostream>
using namespace std;
int main()
{
    int max=0;
    std::string str = "ammmaaaaccbba";
    int n = str.length() - 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
            if(max<count){
                max=count;
                count =0;
                max++;
              
            }
        }
    }
    cout << max;
    return 0;
}