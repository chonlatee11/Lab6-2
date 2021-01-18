#include <stdio.h>
#include <stdlib.h>
typedef struct Node 
{ 
  int data;
  struct Node *Next;
}TYPE_NODE;
typedef struct Node *type_nodePtr;
void print(type_nodePtr p);
int main(void) {
//value
type_nodePtr n,head,tial,q;
//creat new node head 
n = (type_nodePtr)malloc(sizeof(TYPE_NODE));
n -> data = 1;
n -> Next = NULL;
head = n;
//creat new node tial
tial = n;
q = (type_nodePtr)malloc(sizeof(TYPE_NODE));
q -> data = 2;
q -> Next = NULL;
//link node 1,2 and move tial to last
head -> Next = q;
tial = tial -> Next;
print(head);
return 0;
}
void print(type_nodePtr p)
{
  while(p != NULL)
  {
    printf("%d ",p->data);
    p = p->Next;
  }
}
