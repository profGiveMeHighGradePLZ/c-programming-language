#include <stdio.h>
/*
int is_leepYear(int i){
    if(i%4==0&&i%100!=0){
        return 1;
    }
    return 0;
}

int main(){
    int i = 0;
    for(i=1000;i<=2000;i++){
        if(is_leepYear(i) == 1){
            printf("%d\t",i);
        }
    }
    return 0;
}*/
/*
void add(int * ps){
    (*ps)++;
}

int main(){
    int num = 0;
    add(&num);
    printf("%d\n",num);
    return 0;
}*/
int main(){
    int a,b,c;
    a = 10;
    b = 20;
    int add(int, int);
    c = add(10,20);
    printf("%d\n",c);
    return 0;
}
int add(int x, int y){
    return x+y;
}