#include<stdio.h>

int get_b(int ans[], int guess[]){
    int count=0;
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i]=0;
    }
    for(int i=0; i<4; i++){
        arr[(ans[i])]+=1;
    }
    for(int i=0; i<4; i++){
        if(arr[(guess[i])] > 0){
            count++;
            arr[(guess[i])]-=1;
        }
    }

    return count;
}

int main(){
    int input;
    scanf("%d", &input);
    int ans[4];
    ans[0]=input/1000;
    input%=1000;
    ans[1]=input/100;
    input%=100;
    ans[2]=input/10;
    input%=10;
    ans[3]=input;
    while(1){
        int guess[4];
        scanf("%d", &input);
        if(input == 0) break;
        guess[0]=input/1000;
        input%=1000;
        guess[1]=input/100;
        input%=100;
        guess[2]=input/10;
        input%=10;
        guess[3]=input;
        //B
        int b_count=get_b(ans, guess);
        //A
        int a_count=0;
        for(int i=0; i<4; i++){
            if(guess[i] == ans[i]){
                b_count--;
                a_count++;
            }
        }
        printf("%dA%dB\n", a_count, b_count);
    }
    
}