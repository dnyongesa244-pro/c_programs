#include <stdio.h>
int main(){
	int sum = 0;
	int num;
	while(1)
	{
		printf("enter an ineger");
		scanf("%d",&num);
		
		if(num<=0)
		{
			printf("%d",sum);
			break;
		}
		sum += num;
	}
}
