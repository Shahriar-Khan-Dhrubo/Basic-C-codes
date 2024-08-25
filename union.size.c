#include<stdio.h>
union test1
{
    int x,y;
    float a;
    double b;
    char name[30];
};
union test2
{
    int x;
    long int y;
    int num[30];

};
union test3
{
    char a[50];
    int num[50];
    long double z;

};
struct test4
{
    int x;
    char name[100];
    int num[100];
} ;
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;
    printf("Size of test1 = %zu\n",sizeof(t1));
    printf("Size of test2 = %zu\n",sizeof(t2));
    printf("Size of test3 = %zu\n",sizeof(t3));
    printf("Size of test4 = %zu\n",sizeof(t4));

    return 0;
}
