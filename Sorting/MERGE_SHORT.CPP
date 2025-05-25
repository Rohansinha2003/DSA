#include<iostream>
using namespace std;


void mergeshort(int arr[],int start, int mid , int end)
{

    vector<int>temp(end_startm +1 );
    int left =start ,right = mid+1, index=0;



    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            index++,left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    //left array is not empty
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //right array is not empty
    while(right<=end)
    {
        temp.push_back(arr[right]);
        right++;
    }

    index=0;

    //put these value in array
    while(start<=end)
    {
        arr[start]=temp[index];
        start++;
        index++;
    }
    


}

int main()


{
    int arr[] ={6,3,1,2,8,9,10,7,3,10};
    mergesort(arr,0,9);

    for(int i =0;i<10;i++)
   cout<<arr[i]<<" ";

}