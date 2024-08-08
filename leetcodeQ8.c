#include <limits.h>
int myAtoi(char* s) {
    long count = 0;
    int sign = 1;
    int i = 0;
    while(s[i]==' '){
        i++;
    }
    if(s[i]=='-' || s[i] == '+'){
        sign = (s[i] == '-')?-1:1;
        i++;
    }
    while(s[i] <= '9' && s[i] >= '0'){
        count = count*10+(s[i]-'0');
        if(sign*count >2147483647){
            return INT_MAX;
        }
        if(sign*count <-2147483648){
            return INT_MIN;
        }
        i++;
    }
    return (int)sign*count;
}