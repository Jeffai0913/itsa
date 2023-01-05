#include<stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    int bissextile=0;    //true:1
    if(year%4 == 0) bissextile=1;
    if(year%100 == 0) bissextile=0;
    if(year%400 == 0) bissextile=1;
    if(bissextile == 1){
        printf("Bissextile Year\n");
    }else{
        printf("Common Year\n");
    }
}