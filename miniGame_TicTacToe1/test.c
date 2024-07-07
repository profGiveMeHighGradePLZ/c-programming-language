#include "game.h"
void gameStart(){
    printf("********************\n");
    printf("********************\n");
    printf("*****  1,play  *****\n");
    printf("*****  0,quit  *****\n");
    printf("********************\n");
    printf("********************\n");
}
void game(){
    char board[ROW][COL];
    initBoard(board,ROW,COL);
}
int main(){
    int input = 0;
    do{
        gameStart();
        printf("whether to start the game\n");
        printf("please enter(1/0):");
        scanf("%d",&input);
        switch(input){
            case1:
                game();
                break;
            case2:
                break;
            default:
            printf("error,please input again\n");
                break;
        }
    }while(input);
    return 0;
}