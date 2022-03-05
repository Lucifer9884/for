#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, ch;
    printf("Enter The Value Of a =");
    scanf("%d", &a);
    printf("Enter The Value Of b =");
    scanf("%d", &b);
    printf("Enter 1 For Sum\n");
    printf("Enter 2 For Sub\n");
    printf("Enter 3 For Mul\n");
    printf("Enter 4 For Div\n");
    printf("Choose Your Operation =");
    scanf("%d", &ch);
    switch (ch)
    {
        case 1:
        printf("sum=%d", (a+b));
        break;
        case 2:
        printf("sub=%d", (a-b));
        break;
        case 3:
        printf("mul=%d",(a*b));
        break;
        case 4:
        printf("div=%d", (a/b));
        break;
    }
    getch();
}