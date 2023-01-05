#include <stdio.h>

int main(){
    int input=0;
    int bin[8]={0};

    scanf("%d",&input);
    for(int i=7; i>=0; i--){
        bin[i]=input & 0x1;
        input=input >> 1;
        //00101101 -> 00010110
    }

    for(int i=0; i<=7; i++){
        printf("%d", bin[i]);
    }
    printf("\n");
    return 0;
}