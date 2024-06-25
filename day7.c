#include <stdio.h>
/*int main(){
    int i = 0;
    do{
        i++;
        printf("%d\n",i);
    }while(i<=9);
    return 0;
}
*/
/*
int main(){
    
    int c = 0;
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d %d", &a ,&b ,&c);
    sum = a + b + c;
    printf("sum = %d\n",sum);
    return 0;
    
   //int n = 0;
   int m = 1;
   scanf("%d", &n);
   while(n > 0){
    m = m*n;
    n--;
   }
   printf("%d\n",m);
   return 0;
    //
   int i = 0;
   int j = 0;
   int m = 1;
   int sum = 0;
   for(i = 1; i <= 3;i++){
    for(j = i,m = 1; j > 0; j--){
        m = m*j;
    }
    sum = sum + m;
   }
   printf("%d\n",sum);
   return 0;
}*/    
int main(){
    int x = 7;
    int a[]={'0','1','2','3','4','5','6','7','8','9'};
    int sz = sizeof(a)/sizeof(a[0]);
    int left = 0;
    int right = sz - 1;
    while(right > left){
        int mid = (left + right)/2;
        if(mid > x){
            right = mid - 1;
        }
        else if(mid < x){
            left = mid + 1;
        }
        else{
            printf("foundIt,the %dth number\n",mid-1);
            break;
        }
    }
    if(right < left){
        printf("cannotFind");
    }

    return 0;
}