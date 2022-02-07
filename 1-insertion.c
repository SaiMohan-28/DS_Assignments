#include<stdio.h>
int main()
{
    int arr[]={30,45,10,20,50,25,70};
    int i,j,size,temp;
    size = sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<size;i++)
    {
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(i=0;i<size;i++)
      printf("%d ",arr[i]);
      return 0;
}
