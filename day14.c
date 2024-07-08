#include <stdio.h>
/*
int main(){
    int a = 3;
    int b = 5;
    //b=00000000000000000000000000000101
    printf("%d\n",b>>1);
    //b=00000000000000000000000000000010

    printf("%d\n",b<<1);
    //b=00000000000000000000000000001010
    
    //a=00000000000000000000000000000011
    //b=00000000000000000000000000000101
    printf("%d\n",a&b);
    //a&b=00000000000000000000000000000001
    printf("%d\n",a|b);
    //a|b=00000000000000000000000000000111
    printf("%d\n",a^b);
    //a^b=00000000000000000000000000000110
    //exchange a and b without using argument
    //a^a = 0
    //a^0 = a 
    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}*/
int main(){
    int flag = 6;
    printf("%d\n",!flag);
    short s = 5;
    int a = 10;
    printf("%lu  ",sizeof(s=a+2));
    printf("%d\n",s);
    return 0;
}