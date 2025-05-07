#include<stdio.h>
int main(){
    int n=7;
    int arr[7]={1,2,5,6,5,7,5};
    int flag = 0;
    int count = 0;
    int x = 5;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = 1;
            count++;
        }
    }
    if(flag==1){
        printf("The %d is Present %d times",x,count);
    }else{
        printf("The %d is not present",x);
    }
}