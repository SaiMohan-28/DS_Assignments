#include<stdio.h>
int main()
{
    int arr[]={40,30,50,20,10,25};
    int size,i,j,temp,flag;
    size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size-1;i++)
    {
        flag =0;
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                flag=1;
            }
        }
         if(flag==0)
                break;
    }
    for(i=0;i<size;i++)
       printf("%d ",arr[i]);
    return 0;
}
