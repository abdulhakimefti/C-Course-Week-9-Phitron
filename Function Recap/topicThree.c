#include<stdio.h>

int make_sum (void){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    return sum;
}
int main (){
    int l = make_sum();
    printf("%d\n",l);

}