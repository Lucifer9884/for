#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, root2, root3, realPart, imagPart;
    printf("enter value of a,b,c =");
    scanf("%f%f%f", &a,&b,&c);
    d = (b*b-4*a*c);
    if (d>0)
    {
        root2 = (-b +sqrt(d))/(2*a);
        root3 = (-b -sqrt(d))/(2*a);
        printf("root2 = %.2lf and root3 = %.2lf", root2, root3);
    }
    else if (d == 0)
    {
        root2 = root3 = -b / (2 * a);
        printf("root1 = root2 = %.2lf", root2);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}