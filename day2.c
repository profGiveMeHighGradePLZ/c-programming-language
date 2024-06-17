#include <stdio.h>
#include <string.h>
#define max 10000
enum sex{
    male,
    female
};
int main(){
    printf("hehe\n");
    const int add = 10;
    printf("%d\n",add);
    printf("%d\n",max);

    char arr1[] = {'a', 'b', 'c', '\0'};
    char arr2[] = "abc";
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    int len = strlen("abc");
    printf("%d\n",len);
    printf("%lu\n",strlen(arr2));
    return 0;
}