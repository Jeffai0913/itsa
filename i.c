#include<stdio.h>

int main(){
    int num_op;
    scanf("%d", &num_op);
    for(int i=0; i<num_op; i++){
        int a1, b1, a2, b2;    //a1+b1i, a2+b2i
        char operation;
        scanf(" %c%d%d%d%d", &operation, &a1, &b1, &a2, &b2);
        if(operation == '+'){
            printf("%d %d\n", (a1+a2), (b1+b2));
        }else if(operation == '-'){
            printf("%d %d\n", (a1-a2), (b1-b2));
        }else{
            int a3, b3;
            a3=a1*a2-b1*b2;
            b3=a1*b2+a2*b1;
            printf("%d %d\n", a3, b3);
        }
    }
    return 0;
}