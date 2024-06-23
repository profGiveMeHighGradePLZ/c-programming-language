#include<stdio.h>
/*int POWER(int X, int Y){
    int i,power;
    power = 1;
    for(i =0;i<Y;i++){
        power = power * X;
    }
    return power;
}
int main(){
    printf("%d\n",POWER(2,5));
    return 0;
}*//*
int main(){
    //while(1){
        //printf("hehe\n");
    //}
    int i = 1;
    while(i<=10){
        if(i == 5){
            continue;
            //break;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
int main(){
//int ch = getchar();
//    printf("%c\n",ch);//  putchar(ch);
//    int ch = 0;
//    while((ch=getchar()) != EOF){
//        putchar(ch);
//    }
//  return 0;
    char pw[20] = {0};
    printf("input password,PLZ:\n");
    scanf("%s",pw);
    printf("password:%s\n",pw);
    printf("sure?(Y/N)\n");
    int tmp = 0;
    while((tmp = getchar()) != '\n'){
        ;
    }
    //getchar();
    int ch = getchar();
    if(ch == 'Y'){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
