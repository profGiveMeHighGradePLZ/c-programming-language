#include<stdio.h>
#include<string.h>
//a palindrome is symmetrical,divided into odd-numbered palindromes and even-numbered palindromes
char* longestPalindrome(char* s) { 
    int len = strlen(s);
    int max=0;
    int p = 0;
    //if it's an odd-numbered palindrome
    for(int i = 0;i<len;i++){
        int right = i+1,left = i-1;
        while(left>=0 && right < len && s[left] == s[right]){
            left--;
            right++;
        }
        if(right-left+1-2>max){
            max = right-left+1-2;
            p=left+1;
        }
    }
    //if it's an even-numbered palindrome
    for(int i =0;i<len;i++){
        int left = i,right = i+1;
        while(left>=0 && right<len && s[left]==s[right]){
            left--;
            right++;
        }
        if(right-left+1-2>max){
            max=right-left+1-2;
            p=left+1;
        }
    }
    s[p+max] = '\0';
    return s+p;
    }