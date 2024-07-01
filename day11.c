#include <stdio.h>
/*int my_strlen(char* str){
    if(*str != '\0'){
        return 1 + my_strlen(str + 1);
    }
    else{
        return 0;
    }
}
int main(){
    char arr[] = "add";
    printf("%d\n",my_strlen(arr));
}*/
int ret(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return n*ret(n-1);
    }
}
int main(){
    int n = 0;
    scanf("%d",&n);
    printf("%d\n",ret(n));
    return 0;
}