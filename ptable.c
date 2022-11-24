#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, result;
    printf("Enter A Number =");
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        result = n*i;
        printf("%d * %d = %d\n",n, i, result);
    }
    getch(); 
}
