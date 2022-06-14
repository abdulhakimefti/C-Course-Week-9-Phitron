#include<stdio.h>
int main (){
    int a = 10;
    printf("Address => %p and value is %d\n",&a,a);
    int *p = &a;
    printf("Address => %p and value is %p\n",&p,p);
    printf("Value of main address %d\n",*p);
}