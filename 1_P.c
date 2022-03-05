/* Program For Finding largest Number among Three Numbers */
#include <stdio.h>
#include <conio.h>
void main()
{
	float a,b,c;
	printf("Enter Values =");
	scanf("%f%f%f", &a, &b, &c);
	printf("\n Largest Value Is =");
	if(a>b)
	{
		if(a>c)
		printf("%f",a);
		else
		printf("%f",c);
	}
	else
	{
		if(c>b)
		printf("%f",c);
		else
		printf("%f",b);
	}
	getch();
}
