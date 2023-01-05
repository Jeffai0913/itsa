#include<stdio.h>

int main(void){
    int a, b, temp;
    scanf("%d %d", &a, &b);
    if (a>b){
        while (a%b != 0){
            temp=a%b;
            a=b;
            b=temp;
        }
        printf("%d\n", b);
    }else{
        while (b%a != 0){
            temp=b%a;
            b=a;
            a=temp;
        }
        printf("%d\n", a);
    }
    return 0;
}