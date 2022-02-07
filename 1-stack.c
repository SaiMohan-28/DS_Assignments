#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int data;
	struct stack *next;
}list;
void push(list **top)
{
	list *n=0;
	n=(list*)malloc(sizeof(list));
	printf("Push operation occured\n");
	scanf("%d",&n->data);
	n->next=*top;
	*top=n;
	return ;
}
void pop(list **top)
{
	list *t=*top;
	if(t==0)
		printf("stack is empty\n");
else
{
  printf("pop operation occured %d\n",t->data);
  *top=t->next;
  free(t);
  t=0;
}
  return ;
}
int main()
{
	list *top=0;
	  push(&top);
	  push(&top);

	 pop(&top);
	return 0;
}
