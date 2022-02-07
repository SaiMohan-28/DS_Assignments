#include<stdio.h>
#include<stdlib.h>
typedef struct single
{
    int data;
    struct single *next;
}stu;
stu *head=0,*new =0,*latest=0;
void createnode(int data1)
{
    new = (stu *)malloc(sizeof(stu));
    new->data=data1;
    new->next =0;
    if(head==0)
        head=new;
    else
        latest->next=new;
    latest=new;
}
void traverse()
{
    stu *t = head;
    while(t)
    {
        printf("Data : %d\n",t->data);
        t=t->next;
    }
}
int main()
{
      createnode(100);
      createnode(200);
      createnode(300);
      traverse();
   return 0;
}
