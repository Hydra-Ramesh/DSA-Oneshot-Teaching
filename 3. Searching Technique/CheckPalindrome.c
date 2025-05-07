#include<stdio.h>
int main(){
    int n = 7;
    //Take Original Array
    int arr[n]={1,2,3,4,3,2,1};
    int brr[n];
    //Reverse the Array
    for(int i=0;i<n;i++){
        brr[i] = arr[n-i-1];
    }
    //Take one flag and init that this is not a palindrome array(Assume);
    int flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==brr[i]){
            flag = 1;
        }else{
            flag = 0;
            break;
        }
    }
    if(flag==1){
        printf("Yes this is a palindrome\n");
    }else{
        printf("No this is not a palindrome\n");
    }

}