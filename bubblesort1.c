#include<stdio.h>
void main()
{ 
    int a[6],n;
printf("enter the size");
scanf("%d",&n);
printf("enter the element");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
printf("the sorted array is=%d\t");
for(int i=0;i<n;i++){
    printf("\t%d",a[i]);
}
}