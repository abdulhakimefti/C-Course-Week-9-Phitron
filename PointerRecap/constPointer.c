#include<stdio.h>
int main (){
    const int a =10;
    int *p = &a;
    *p = 100;
    printf("%d\n",a);

    const int *const q = &a;
    // *q = 200; not working !! bcz its constant
    int **r = &q;
    **r = 1000;
    printf("%d\n",a);
}