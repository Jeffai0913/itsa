#include<stdio.h>

int main(){
    int max;
    int total=0;
    scanf("%d", &max);
    for(int i=1; i<=max; i++){
        if(i%3 == 0) total+=i;
    }
    printf("%d\n", total);
    return 0;
}