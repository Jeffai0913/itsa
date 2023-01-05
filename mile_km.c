#include<stdio.h>

int main(){
    int mile;
    double km;
    scanf("%d", &mile);
    km=mile*1.6;
    printf("%.1lf\n", km);
    return 0;
}