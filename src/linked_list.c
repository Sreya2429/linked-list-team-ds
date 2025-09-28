#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node*link;
};
struct Node*createNode(int rno){
struct Node*one=(struct Node*)malloc(sizeof(struct Node));
one->data=rno;
one->link=NULL;
return one;
}

void print(struct Node*head){
struct Node*temp=head;
while (temp!=NULL){
        printf("%d->",temp->data);
    temp=temp->link;
}
printf("NULL");
}








