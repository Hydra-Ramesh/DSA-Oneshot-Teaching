#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n = 5;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //Reverse Print
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
    printf("\nReversed Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}