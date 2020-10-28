#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;structNode *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
  structNode *t;
  t=(structNode*)malloc(sizeof(structNode));
  if(t==NULL)
  printf("Queue is FUll\n");
  else    
  {        
    t->data=x;        
    t->next=NULL;
      if(front==NULL)
      front=rear=t;
      else        
    {
    rear->next=t;
    rear=t;        
    }    
  }
}

int dequeue()
{
  int x=-1;
  structNode* t;
  if(front==NULL)
  printf("Queue is Empty\n");
  else    
  {
    x=front->data;        
    t=front;
    front=front->next;
    free(t);    
  }
  return x;
}

void Display()
{
  structNode *p=front;
  while(p)    
  {
    printf("%d ",p->data);
    p=p->next;
  }
  printf("\n");
}

int main()
{
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
Display();
printf("%d ",dequeue());
return0;
}
