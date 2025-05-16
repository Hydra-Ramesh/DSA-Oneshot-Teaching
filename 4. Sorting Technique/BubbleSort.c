#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    //Original array
    printf("Original array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        //Count Pass
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    //Sorted array
    printf("\nSorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}