#include<stdio.h>

int binary(int a[], int low, int high, int key){
    if(low>high) return -1;

    int mid=(low+high)/2;

    if(a[mid]==key) return mid;
    else if(key<a[mid])
        return binary(a,low,mid-1,key);
    else
        return binary(a,mid+1,high,key);
}

int main(){
    int a[100], n, key, i, res;

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    scanf("%d",&key);

    res = binary(a,0,n-1,key);

    if(res==-1) printf("Not Found");
    else printf("Found at position %d", res+1);
}N
