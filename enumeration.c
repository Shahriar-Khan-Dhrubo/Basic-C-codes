#include<stdio.h>
enum days
{
    sat,
    sun,
    mon,
    tue,
    wed,
    thu,
    fri
};
int main()
{
    enum days day1;
    day1= fri;
    printf("Day serial = %d",day1+1);

    return 0;
}
