#include<stdio.h>

int main(){
    int input;
    scanf("%d", &input);
    int temp=input;
    int count=0, num[16], rev_num[16];
    while(input > 0){
        rev_num[count++]=input%10;
        input/=10;
    }
    input=temp;
    int temp_count=count;
    count--;
    while(input > 0){
        num[count--]=input%10;
        input/=10;
    }
    count=temp_count;
    int equal=1;    //1:相等
    for(int i=0; i<count; i++){
        if(num[i] != rev_num[i]){
            equal=0;
            break;
        }
    }
    if(equal == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}