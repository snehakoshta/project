#include<stdio.h>

int binarysearch(int a[],int key,int s,int e){
    while(s<=e){
        int mid =(s+e)/2;
        if(a[mid==key]){
            return mid;
        }
        else if(a[mid]=key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("enter the element");


       scanf("%d",&n);  
        int a[n];
    for(int i=0;i<n;i++)
{
    printf("%d",a[i]);
}

}
