#include<stdio.h>
/*
int main(){
    int arr[3][4] = {{1,2},{3,4},{5,6}};
    int i,j;
    i = 0;
    j = 0;
    for(i = 0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
void bubble_sort(int arr[],int sz){
    int i = 0;
    for(i=0;i<sz-1;i++){
        int j = 0;
        for(j = 0;j<sz-1-i;j++){
            int tmp = 0;
            if(arr[j] < arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = tmp;
            };
        }
    }
}
int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    int i = 0;
    for(i = 0;i<size;i++){
    printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}