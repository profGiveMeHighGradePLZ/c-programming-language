#include <stdbool.h>
bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    long int rev = 0;
    long int tmp = x;
    while(tmp){
        int digit = tmp%10;
        tmp /= 10;
        rev = rev*10 + digit;
    }
    if(rev == x){
        return true;
    }
    else{
        return false;
    }
}