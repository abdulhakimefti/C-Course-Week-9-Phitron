#include<stdio.h>
int main (){
    int a=10;
    int *p = &a;
    int **q = &p;
    printf("%d\n",a);
    printf("%p %p\n",p,&p);
    printf("%p %p\n",q,&q);
    printf("%d\n",**q);

    *p = 100;
    printf("%d\n",a);
    **q = 4000;
    printf("%d\n",a);
}