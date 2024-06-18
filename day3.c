#include <stdio.h>
int add(x,y){
    int z = x + y;
    return z;
}
int main(){
    /*
    int input = 0;
    scanf("%d", &input);
    if(input == 1)
        printf("yes\n");
    
    else
        printf("no\n");
    */
    /*int line = 0;
    while (line < 10){
        printf("%d\n",line);
        line++;}
    if (line == 10){
        printf("2\n");}
    */
    /*int sum = add(1, 1);
    printf("%d\n",sum);
    */
    int arr[10] = {0};
    int i = 0;
    while(i<10){
        arr[i] = i;
        printf("%d\n",arr[i]);
        i++;}
    int a = 5;
    int b = 3;
    int max = 0;
    max = a>b ? a : b;
    printf("%d\n",max);
    int fff = 500;
    return 0;
}