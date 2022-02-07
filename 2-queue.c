#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
	int data;
	struct queue *next;
}emp;
emp *h=0,*l=0,*n=0;
void enque()
{
	n=(emp*)malloc(sizeof(emp));
	printf("Enque operation occured\n");
	scanf("%d",&n->data);
	if(h==0)
		h=n;
	else
	 l->next=n;
	l=n;
	n->next=0;
	return ;
}
void deque()
{
	emp *temp=h;
	if(temp==0)
		printf("Queue is empty\n");
	else
	{
	printf("Deque operation occured :%d\n",temp->data);
	h=temp->next;
	free(temp);
	temp=0;
	}
	return ;
}
int main()
{
	
			enque();
			enque();
			enque();
			deque();
	return 0;
}
