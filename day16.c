#include <stdio.h>
/*
int my_strlen(char * arr){
    char * arr0 = arr;
    while(*arr != '\0'){
        arr++;
    } 
    return arr-arr0;
}
int main(){
    //int num = 10;
    //int * p = NULL;
    //p = &num;
    //if(p != NULL){
    //    printf("%d  ",*p);
    //}
    char arr[5] = "abc";
    printf("%d\n",my_strlen(arr));
    return 0;
}*/

#define N_VALUES 5
int main(){
    float value[N_VALUES];
    float * vp;
    for(vp = &value[0];vp < &value[N_VALUES];/*vp++*/){
        *vp++ = 0;
        /**vp=0; */
    }
    int i = 0;
    for(i=0;i<N_VALUES;i++){
        printf("%lf  ",value[i]);
    }
    return 0;
}
