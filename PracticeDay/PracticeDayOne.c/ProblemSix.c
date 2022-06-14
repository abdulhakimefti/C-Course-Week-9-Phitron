#include<stdio.h>
#include<string.h>
int reverse_array(int arr[],int len){
    for(int i = len-1,j=0;i<=0;i--,j++){
        arr[i] = arr[j];
    }
}

int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int len = strlen(arr);
    reverse_array(arr,n);
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}