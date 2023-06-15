#include <stdio.h>
int main()
{
	int a=1;
	int b=a++;
	int c=++a;
	b++;
	printf("%d",a);
	printf("\n%d",c);
}
