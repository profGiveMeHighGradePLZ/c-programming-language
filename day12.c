#include <stdio.h>
#include <string.h>
/*
int main(){
    int i = 0;
    int count = 0;
    for(i = 100 ;i<=200;i++){
        
        int j = 2;
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i == j){
            printf("%d  ",i);
            count++; 
        }
    }
    printf("\n%d\n",count);
   
    return 0;
}*/
/*
int main(){
flag:
    printf("hehe\n");

    goto flag;
    return 0;
}*/
int main(){/*
    char arr1[]="bit";
    char arr2[]={'b','i','t'};
    char arr3[]={'b','i','t','\0'};
    printf("%lu\n",strlen(arr1));
    printf("%lu\n",strlen(arr2));
    printf("%lu\n",strlen(arr3));
    int arr4[10] = {0};
    arr4[5] = 4;
    int i = 0;
    int sz = sizeof(arr4)/sizeof(arr4[0]);
    for(i=0;i<sz;i++){
        printf("%d  ",arr4[i]);
        printf("%p\n",&arr4[i]);
    }*/
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    int * pa = arr;
    for(i=0;i<10;i++){
        printf("%d  ",*pa);
        pa++;
    }
    return 0;
}