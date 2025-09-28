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

struct Node*insertAtEnd(struct Node*head,int data){
struct Node*newNode=createNode(data);

struct Node*temp=head;
if(temp==NULL){
    return newNode;
}
while(temp->link!=NULL){
    temp=temp->link;
}
temp->link=newNode;
return head;
};



int main(){
int myRollNo=57;
int teammate1RollNo=50;
struct Node*head=NULL;
head=createNode(myRollNo);
head->link=NULL;

printf("Roll Numbers in Linked List: ");
head=insertAtEnd(head,teammate1RollNo);

print(head);
return 0;
}





