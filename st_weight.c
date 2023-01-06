#include<stdio.h>

double stand_cal(int h, int g){
    double val;
    if(g == 1){
        val=(h-80)*0.7;
    }else{
        val=(h-70)*0.6;
    }
    return val;
}

int main(){
    int height, gender;
    while((scanf("%d %d", &height, &gender)) != EOF){
        printf("%.1lf\n", stand_cal(height, gender));
    }
}