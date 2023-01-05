#include<stdio.h>

int main(){
    int start_h, start_m;
    scanf("%d %d", &start_h, &start_m);
    int end_h, end_m;
    scanf("%d %d", &end_h, &end_m);
    int time[2];
    time[0]=end_h-start_h;
    time[1]=end_m-start_m;
    int total=0;
    if(time[0] < 2 || (time[0]==2 && time[1]==0)){
        //t<2
        time[1]+=time[0]*60;
        total+=(time[1]/30)*30;
    }else if(time[0] >= 2 && time[0] <= 4){
        //2<t<4
        total+=120;
        time[0]-=2;
        time[1]+=time[0]*60;
        total+=(time[1]/30)*40;
    }else{
        //4<t
        total+=280;
        time[0]-=4;
        time[1]+=time[0]*60;
        total+=(time[1]/30)*60;
    }

    printf("%d\n", total);
    return 0;
}