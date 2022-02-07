#include<stdio.h>
int main()
{
    int arr[]={30,45,10,20,50,25,70};
    int i,j,size,temp,min;
    size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size-1;i++)
    {
       min =i;
       for(j=i+1;j<size;j++)
       {
           if(arr[j]<arr[min])
              min = j;
       }
       if(min != i)
       {
           temp = arr[i];
           arr[i] = arr[min];
           arr[min] = temp;
       }
    }
    for(i=0;i<size;i++)
      printf("%d ",arr[i]);
      return 0;
}
