//WRITE A PROGRAM TO QUEUE IMPLEMENTATION USING ARRAY.
#include<stdio.h>
int queue[100],choice,n,front,rear,x,i,max;
void enqueue(void);
void dequeue(void);
void display(void);
int main()
{
    
  front =0;
    printf("\n Enter the size of queue[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t QUEUE OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void enqueue()
{
    if(rear>=n-1)
    {
        printf("\n\tQUEUE is over flow");
        
    }
    else
    {
        printf(" Enter a value to be enqueue:");
        scanf("%d",&x);
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if (front == - 1 )
    {
        printf("\n\t Queue is under flow");
        return;
    }
    else
    {
        printf("\n\t The dequeue elements is %d",queue[front]);
        front++;
    }
}
void display()
{
    if(front==-1)
    {
        printf("\n The elements in QUEUE\n");
        for(i=front; i<=rear; i++)
            printf("\n%d",queue[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The QUEUE is empty");
    }
   
}
