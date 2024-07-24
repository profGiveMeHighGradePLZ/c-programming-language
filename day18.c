#include<stdio.h>

// int DigitSum(int num){
//     if(num>9){
//         int a = 0;
//         int b = 0;
//         a = num%10;
//         b = num/10;
//     return a + DigitSum(b);}
//     else{
//         return num;
//         //to break DigitSum's circulation
//     }
    
    // if(num>9){
    //     return DigitSum(num/10) +num%10;
    // }
    // else{
    //     return num;
    // }
    
// }
// int main(){
//     int num = 1729;
//     int sum = 0;
//     sum = DigitSum(num);
//     printf("%d\n",sum);
//     return 0;
// }
// double Power(int n,int k){
//     if(k >0){
//         return n*Power(n,k-1);
//     }
//     else if(k == 0){
//         return 1;
//     }
//     else{
//         return 1.0/(Power(n,-k));
//         //consider the situation when k is negative
//     }
// }

// int main(){
//     int n = 2;
//     int k = 4;
//     int num = Power(n,k);
//     printf("%d\n",num);
//     return 0;
// }