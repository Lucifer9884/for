//Write A Program To Print Fibonnaci Series From 0 To Nth Terms(Nth Terms No Of Terms Enter By User)
//Header Files
#include <stdio.h>
#include <conio.h>
//Main Function
void main()
{
    int i, n;
    //Take No Of Terms By User
    printf("Enter The Number Of Terms : ");
    scanf("%d", & n);
    // Initialize First and Second Terms
    int t1 = 0;
    int t2 = 1;
    //Print Above Terms
    printf("Series Is :%d %d ",t1, t2);
    //For Loop For Print Nth Terms Of Series
    for (i = 3; i <= n; i++)
    {
        // Initialize Third Term And Print It
        int t3 = t1 + t2;
        printf("%d ", t3);
        //Swap The Values Of Term1, Term2 And Term3
        t1 = t2;
        t2 = t3;
    }
    getch();
}