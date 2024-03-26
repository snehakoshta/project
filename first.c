#include<stdio.h>
#include<conio.h>
void main()
{ 
    int a[10],i,j,temp;
    printf("enter the element");
    for(int i=1;i<4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<4;i++){
        for(j=0;j<4-1-i;j++){
            if(a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }

        }
    }
    for(i=0;i<3;i++){
    for(j=0;j<3-1-i;j++){
        if(a[j]>a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        }
    }
}
    for(i=0;i<2;i++){
    for(j=0;j<2-1-i;j++){
        if(a[j]>a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        }
    }
}
for(i=0;i<1;i++){
    for(j=0;j<1-1-i;j++){
        if(a[j]>a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        }
    }
}
printf("the sorted array is:");
for(i=0;i<4;i++){
    printf("%d\t",a[i]);
}



}