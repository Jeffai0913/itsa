#include<stdio.h>
#include<stdbool.h>
int main(void){
    int a;
    bool prime=true;
    scanf("%d", &a);
    for (int i=2; (i*i)<=a; i++){
        if ((a%i)==0){
            prime=false;
            break;
        }
    }
    if(prime == true){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}