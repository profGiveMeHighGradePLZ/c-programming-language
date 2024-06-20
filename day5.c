#include <stdio.h>
/*int main(){
    long nc;
    nc = 0;
    while(getchar() != EOF){
        nc++;}
    printf("%ld\n",nc);
    
}

int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d", &a , &b);
    printf("%d\n",(a>b?a:b));
    return 0;
    }
*//*
int test(){
    if(0)
        return 0;
    printf("hehe\n");
    return 1;
}
int main(){
    test();
    return 0;
}*//*
int main(){
    int number;
    number = getchar();
    if(number%2 == 1){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}*/
/*
int main(){
    int i;
    i = 0;
    while(i<=100){
        if(i%2 == 1){
            printf("%d\n",i); }
        i++;
    }
    //for(i=0;i<=100;i++)
      //  if(i%2 == 1)
        //    printf("%d\n",i);
    return 0;
}
*/
int main(){
    int day = 0;
    scanf("%d",&day);
    switch(day){
        case 1: 
        case 2:
        case 3:
        case 4:
        case 5: 
            printf("work\n");
            break;
        case 6: 
        case 7: 
            printf("break\n");
            break;
        default:
            printf("wrong ");
            break;
    }
    return 0;
}