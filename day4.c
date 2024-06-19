#include <stdio.h>
/* veision01
int main(){
    int fahr, celsius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr - 32)/9;
        printf("%d\t%d\n",fahr, celsius); //printf("%3d %6d",fahr, celsius);
        fahr = fahr + step;}
    return 0;
}
*/

// version02
/*
int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%3.0f %6.1f\n",fahr, celsius); //printf("%3d %6d",fahr, celsius);
        fahr = fahr + step;}
    return 0;
}

#define lower 0
#define upper 300
#define step 20
int main(){
    int fahr;
    for(fahr = upper; fahr >= lower ; fahr = fahr - step){
        printf("%3d %6.1f",fahr , (5.0/9.0)*(fahr - 32));
    }
    return 0;
}
*/
/*
int main(){
    int c;
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
}
*//*
extern int fff;//in day3.c
typedef int t;
void test(){
    t b = 2;
    static t a = 2;
    printf("a: %d\n",a);
    printf("b: %d\n", b);
    b++;
    a++;
}
int main(){
    int i = 0;
    while(i <= 10){
        test();
        i++;
    }
    return 0;
}*/

/*
int main(){
    int a = 10;
    printf("%p\n",&a);
    int * pa = &a;
    *pa = 20;
    printf("%d\n",a);
    return 0;}
*/
/*
#define MAX 100
#define ADD(X,Y) ((X)+(Y))
int main(){
    printf("%d\n",ADD(2,3));
    return 0;
}*/

struct student{
    char name[20];
    int id;
};
int main(){
    struct student b = {"barry", 123};
    struct student * pb = &b;
    printf("1: %s %d\n",b.name, b.id );
    printf("2: %s %d\n",(*pb).name, (*pb).id);
    printf("3: %s %d\n",pb->name,pb->id);
    return 0;
}