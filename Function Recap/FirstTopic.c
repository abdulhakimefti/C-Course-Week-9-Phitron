#include<stdio.h>
int str_length(char str[]){
    int index =0;
    while(str[index]!='\0'){
        index++;
    }
    return index;
}

int main (){
    char str[]="Efti";
    int l = str_length(str);
    printf("%d\n",l);
}