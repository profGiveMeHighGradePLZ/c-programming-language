#include <stdio.h>
/*
int main(){
    printf("hehe\n");
    main();
    return 0;
}*/
int main(){
    unsigned int i = 0;
    scanf("%u",&i);
    void print(unsigned int);
    print(i);
    return 0;
}

void print(unsigned int n){
    if(n >9){
        print(n / 10);
    }
    printf("%u\t",n%10);
}