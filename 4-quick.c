#include<stdio.h>
int partition(int *arr,int lb,int ub)
{
    int pivot,start,end,temp;
    pivot = arr[lb];
    start = lb;
    end = ub;
    while(start<end)
{
    while(arr[start] <= pivot)
    {
        start++;
    }
    while(arr[end] > pivot)
    {
        end--;
    }
    if(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}
    temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;
    return end ;
}
void quicksort(int *arr,int lb,int ub)
    {
        int loc;
        if(lb<ub)
        {
        loc = partition(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
        }
        return ;
    }
int main()
{
    int arr[]={30,45,10,20,50,25,70};
    int i,j,size,lb=0,ub;
    size = sizeof(arr)/sizeof(arr[0]);
    ub = size-1;
    quicksort(arr,lb,ub);
    for(i=0;i<size;i++)
      printf("%d ",arr[i]);
      return 0;
}
