
//WRITE A PROGRAM TO DYNAMIC IMPLEMENTATION OF STACK USING LINKED LIST.
#include<stdio.h>
#include<stdlib.h>
struct stack{
        int data;
        struct stack*next;
};
 struct stack *top,*temp,*temp1,*temp2;
 void createnode()
 {
        printf("enter the element ");
        temp=(struct stack*)malloc(sizeof(struct stack));
        scanf("%d",&temp->data);
        top=temp;
        temp->next=NULL;
 }
 void insertnode()
 {
        printf("enter the value to insert node");
        temp1=(struct stack*)malloc(sizeof(struct stack));
        scanf("%d",&temp1->data);
       temp1=temp;
        temp1->next=NULL;
        printf("the node is inserted\n");

 }
 void deletenode(){
        printf("enter the element to be deleted");
        temp2=(struct stack*)malloc(sizeof(struct stack));
        scanf("%d",&temp2->data);
        temp2=temp;
        temp2->next=NULL;
        free(temp2);
        printf("the node is deleted\n");



 }
  void display()
  {
       printf("the node is:");
       temp=(struct stack*)malloc(sizeof(struct stack));
       printf("%d\n",temp->data);
       temp2=temp;
       temp2->next=NULL;

  }

 int main(){
        for(int i=0;i<3;i++){
    createnode();
        }
        for(int i=0;i<3;i++){
        
    insertnode();
        }
         for(int i=0;i<3;i++){
                deletenode();
         }
          display();
         printf("the node is not available to insert and delete\n");

 }

