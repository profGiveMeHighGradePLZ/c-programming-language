//this game is to guess a number from 1 to 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu(){
    printf("################\n");
    printf("#####1,play#####\n");
    printf("#####0,exit#####\n");
    printf("################\n");
}
void game(){
    int ret = 0;
    
    ret = (rand()%100)+1;
    int guess = 0;
    
    while(1){
        scanf("%d",&guess);
        if(guess > ret){
            printf("guess large\n");
        }
        else if(guess < ret){
            printf("guess small\n");
        }
        else{
            printf("you are right\n");
            break;
        }
    }
}
int main(){
    int input = 0;
    srand((unsigned int)time(NULL));
    do{
        
        menu();
        printf("please input\n");
        scanf("%d",&input);
        switch(input){
            case 1:
                printf("game start\n");
                printf("please guess a number between 1 to 100\n");
                game();
                break;
            case 0:
                break;
            default:
                printf("input again\n");
                break;
        }
    }while(input);
    return 0;
}