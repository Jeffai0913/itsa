#include<stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int dist_sq=(x*x)+(y*y);
    if(dist_sq <= 10000){
        printf("inside\n");
    }else{
        printf("outside\n");
    }
    return 0;
}