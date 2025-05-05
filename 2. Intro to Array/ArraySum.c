#include<stdio.h>
int main(){
    int n = 5;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("The sum is %d", sum);
    return 0;
}