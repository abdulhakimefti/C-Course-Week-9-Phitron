#include<stdio.h>
int main (){
    int a[5] = {1,2,3,4,5};
    printf("%p %p\n",a,&a[0]);
    printf("%d\n",*a);
    printf("%d\n",*(a+1));

    //*(a+1) = a[1];
    // a = &a[0];
    // *a = a[0];
    // *(a+i) = a[i];
    
}