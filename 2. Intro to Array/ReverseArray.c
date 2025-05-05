#include<stdio.h>
int main(){
    int n = 5;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //Reverse Print
    for(int i=0;i<n;i++){
        brr[i] = arr[n-i-1];
    }
    printf("\nReversed Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}