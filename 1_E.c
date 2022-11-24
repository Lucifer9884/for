//Program For Check Number Is Even Or Odd
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter The Value of n=");
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf("The Number Is Even!!", n);
    }
    else
    {
        printf("The Number Is odd!!", n);
    }
    getch();
}
