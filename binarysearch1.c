#include<stdio.h>
#include<conio.h>
int binarySearch(int a[],int low,int high,int n,int mid,int data){
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(data==a[mid])
        return(mid);
        if(data<a[mid])
        high=mid-1;
        else
        low = mid+1;


    }
    return(-1);

}
void main(){
    int n,a[67];
    printf("enter the value");
    for(int i=0;i<8;i++){
    scanf("%d",&a[i]);
    }
    binarySearch( a[],0,n-1);

}
