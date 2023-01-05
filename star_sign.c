#include<stdio.h>

int main(){
    int month, day_num;
    scanf("%d %d", &month, &day_num);
    if(month == 1 && day_num >= 21 || month == 2 && day_num <= 18) printf("Aquarius\n");
    if(month == 2 && day_num >= 19 || month == 3 && day_num <= 20) printf("Pisces\n");
    if(month == 3 && day_num >= 21 || month == 4 && day_num <= 20) printf("Aries\n");
    if(month == 4 && day_num >= 21 || month == 5 && day_num <= 21) printf("Taurus\n");
    if(month == 5 && day_num >= 22 || month == 6 && day_num <= 21) printf("Gemini\n");
    if(month == 6 && day_num >= 22 || month == 7 && day_num <= 22) printf("Cancer\n");
    if(month == 7 && day_num >= 23 || month == 8 && day_num <= 23) printf("Leo\n");
    if(month == 8 && day_num >= 24 || month == 9 && day_num <= 23) printf("Virgo\n");
    if(month == 9 && day_num >= 24 || month == 10 && day_num <= 23) printf("Libra\n");
    if(month == 10 && day_num >= 24 || month == 11 && day_num <= 22) printf("Scorpio\n");
    if(month == 11 && day_num >= 23 || month == 12 && day_num <= 21) printf("Sagittarius\n");
    if(month == 12 && day_num >= 22 || month == 1 && day_num <= 20) printf("Capricorn\n");
}