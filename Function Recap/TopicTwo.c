#include<stdio.h>
#include<string.h>
void check_char(char str[],char ch){
    for(int i =0;i<strlen(str);i++){
        int val = str[i];
        if(val == ch){
            printf("Yes\n");
            return;
        }
    }
    printf("No\n");
}

int main (){
    char a[]="hellobaoe",b[]="Warld";
    char c ='o';
    check_char(a,c);
    check_char(b,c);
}