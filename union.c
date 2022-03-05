#include <stdio.h>
#include <conio.h>
#include <string.h>
union Data
{
    int a;
    float e;
    char str[20];
};
int main()
{
    union Data data;
    printf("Size Of union=%d", sizeof(data));
    return 0;
}