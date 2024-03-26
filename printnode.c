#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct stack*next;
}; struct node*n,*start,*item,*loc;
void createnode()
{
       printf("enter the element ");
       n=(struct node*)malloc(sizeof(struct node));
       scanf("%d",&n->data);
       n= start;
        n->next=NULL;
}
void insert(){
        printf("enter the element  to be inserted");
n=(struct node*)malloc(sizeof(struct node));
scanf("%d",&n->data);
        n->data=start;
        n->next=NULL;
        loc=n;
        

}
void display(){
        printf("the node is:");
n=(struct node*)malloc(sizeof(struct node));
 printf("%d\n",n->data);
 n=start;
 n->next=NULL;
 printf("---->");
}
void main()
{
        createnode();
        insert();
        display();
}






























