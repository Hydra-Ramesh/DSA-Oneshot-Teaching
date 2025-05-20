#include<stdio.h>
#include<limits.h>
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        //Count the Pass
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindex = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindex = j;
            }
        }
        swap(&arr[i],&arr[mindex]);
    }
}
int main(){
    int n=5;
    int arr[]={5,4,3,2,1};
    print(arr,n);
    printf("\nBubble Sort\n");
    //Bubble Sort
    bubbleSort(arr,n);
    print(arr,n);
    printf("\nSelection Sort\n");
    //Selection Sort
    selectionSort(arr,n);
    print(arr,n);
}