#include <stdio.h>
/*struct student{
    char name[20];
    char gender[20];
    int age[20];
};
int main(){
    struct student Lisa = {"Lisa","girl",22};
    struct student * p = &Lisa;
    printf("student:");
    printf("%s\t",Lisa.name);
    printf("%s\t",(*p).gender);
    printf("%d\n",*p->age);
    return 0;
}*/

int main(){
    int arr[10] = {0};
    int * p = arr;
    int i = 0;
    for(i = 0;i<10;i++){
        *(p+i)= 1;
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}