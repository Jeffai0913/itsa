#include<stdio.h>

int func(int input){
    if(input == 0 || input == 1){
        return (input+1);
    }else if(input > 1){
        return (func(input-1)+func(input/2));
    }
    return 0;
}

int main(){
    int input;
    scanf("%d", &input);
    int output=func(input);
    printf("%d\n", output);
}