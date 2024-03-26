//WRITE A PROGRAM TO DYNAMIC IMPLEMENTION OF LINKED LIST IN QUEUE.
#include<stdio.h>
#include<stdlib.h>
struct queue{
        int data;
        struct queue*next;
};
 struct queue*top,*temp,*rear,*front;
 void createnode()
 {
        printf("enter the element ");
        temp=(struct queue*)malloc(sizeof(struct queue));
        scanf("%d",&temp->data);
        top=temp;
        temp->next=NULL;
 }
 void insertnode()
 {
        printf("enter the value to insert node");
        rear=(struct queue*)malloc(sizeof(struct queue));
        scanf("%d",&rear->data);
        rear=temp;
        rear->next=NULL;
        printf("the node is inserted\n");

 }
 void deletenode(){
        printf("enter the element to be deleted");
        front=(struct queue*)malloc(sizeof(struct queue));
        scanf("%d",&front->data);
        front=temp;
        front->next=NULL;
        free(front);
        printf("the node is deleted\n");



 }
 void display()
 {
       printf("the node is:");
       
              printf("%d",temp->data);
              temp=temp->next;

       
       printf("\n");

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
 }

