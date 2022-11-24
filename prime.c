//Write A Program To Check Number Is Prime Or Not
//Header Files
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n; 
    int flag = 0;
    printf("Enter A Number To Check : ");
    scanf("%d", & n);
    //0 And 1 Are Not A Prime Numbers So, I Am Changing The Flag Variable To 1
    if (n == 0 || n == 1)
    {
        flag = 1;
    }
    //For Loop For Check From 2 To n Numbers
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
        
    }
    if (flag == 0)
    {
        printf("%d Is A Prime Number!!", n);
    }
    else
    {
        printf("%d Is Not A Prime Number!!", n);
    }
    getch();
}