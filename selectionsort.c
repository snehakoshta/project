#include<stdio.h>
#include<conio.h>
void main()
{
    int a[8],j,i,temp,small;
    printf("enter the element");
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
       int small = i;
       for(j=i+1;j<6;j++)
       {
        if(a[j]>a[small])
        {
            small = j;
            
    temp = a[small];
    a[small] = a[i];
    a[i]= temp;

        }

       }
    }










printf("the sorted array is:  ");
for(i=0;i<6;i++)
{
    printf("%d\t",a[i]);
}


       }
    
