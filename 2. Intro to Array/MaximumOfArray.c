#include<stdio.h>
#include<limits.h>
int main(){
    int n = 5;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    printf("\nThe max is%d :", maxi);
    return 0;
}