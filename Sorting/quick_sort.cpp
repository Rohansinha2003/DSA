#include<iostream>
using namspace std;


int partition(int arr[],int start, int end)
{
    int pos=start;
    for(i=0;i<end;i++)
    {
        if(arr[i]<arr[end])
        swap(arr)
    }
}

void quicksort(int arr[],int start,int end)
{
    if (start>=end)
    return;
    int pivot = partition(arr,start,end);
    //left side
    quicksort(arr,start,pivot-1);
    //right side
    quicksort(arr,pivot+1,end);

}
int main()
{
    int arr[]={10,3,6,8,4,2,9,7,1,5};
    quicksort(arr,0,9);
    for(i=0;i<10;i++)
    cout arr[i]=" ";

}