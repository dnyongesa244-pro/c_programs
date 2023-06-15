#include <stdio.h>
int main()
{
	int a[] = {1,2,3,4,5,6,7,6,5,4,5,6,76,45,76,445,7,33,56,87,35,78,97,45,9975,335,99};
	int x =sizeof(a);
	int y = sizeof(a[0]);
	int zz = x/y;
	printf("%d",zz)	;
	printf("\n%d",y);
	printf("\n%d",x);
	
	return 0;
}
