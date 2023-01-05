#include<stdio.h>

int main(){
    int map[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &map[i][j]);
        }
    }
    
    int win=0;    //win:1, no one win:0
    if(map[0][0] == map[0][1] && map[0][1] == map[0][2]) win=1;
    if(map[1][0] == map[1][1] && map[1][1] == map[1][2]) win=1;
    if(map[2][0] == map[2][1] && map[2][1] == map[2][2]) win=1;
    if(map[0][0] == map[1][0] && map[1][0] == map[2][0]) win=1;
    if(map[0][1] == map[1][1] && map[1][1] == map[2][1]) win=1;
    if(map[0][2] == map[1][2] && map[1][2] == map[2][2]) win=1;
    if(map[0][0] == map[1][1] && map[1][1] == map[2][2]) win=1;
    if(map[0][2] == map[1][1] && map[1][1] == map[2][0]) win=1;

    if(win == 1){
        printf("True\n");
    }else{
        printf("False\n");
    }
}