#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head,*ptr;

void insert();
void delete();
void display();
void main(){
    int choice=0;
    while(choice!=9){
        printf("1 for insert\n,2 for delete\n,3 for display\n,4 for exit\n");
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert();
                    break;
             case 2:
                    delete();
                    break;
             case 3:
                display();
                break;
           case 4: 
                 printf("exits");
                 default:
                 printf("linked list full");

        }
    }
}
void insert(){
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted");  
    }  
      
}  

void delete(){
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  
void display(){
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
}
}

