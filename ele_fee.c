#include<stdio.h>

int main(){
    int ele_use;
    scanf("%d", &ele_use);
    float fee=0, ns_fee=0;
    if(ele_use <= 120){
        fee+=ele_use*2.10;
        ns_fee=fee;
    }else if(ele_use >= 121 && ele_use <= 330){
        fee+=(120*2.1)+(ele_use-120)*3.02;
        ns_fee+=(120*2.1)+(ele_use-120)*2.68;
    }else if(ele_use >= 331 && ele_use <= 500){
        fee+=(120*2.1)+(210*3.02)+(ele_use-330)*4.39;
        ns_fee+=(120*2.1)+(210*2.68)+(ele_use-330)*3.61;
    }else if(ele_use >= 501 && ele_use <= 700){
        fee+=(120*2.1)+(210*3.02)+(170*4.39)+(ele_use-500)*4.97;
        ns_fee+=(120*2.1)+(210*2.68)+(170*3.61)+(ele_use-500)*4.01;
    }else{
        fee+=(120*2.1)+(210*3.02)+(170*4.39)+(200*4.97)+(ele_use-700)*5.63;
        ns_fee+=(120*2.1)+(210*2.68)+(170*3.61)+(200*4.01)+(ele_use-700)*4.50;
    }

    printf("Summer months:%.2f\n", fee);
    printf("Non-Summer months:%.2f\n", ns_fee);
}