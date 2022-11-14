#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;

	printf("Enter three integers\n");
	scanf("%d %d %d", &a,&b,&c);

	if (a>b && a>c)
		printf("A is Greater");

	else if(b>c)
		printf("B is Greater");

	else
		printf("C is Greater");

	getch();
}
