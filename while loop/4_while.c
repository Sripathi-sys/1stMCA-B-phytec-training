#include <stdio.h>

int main()
{
	int num;
	int sum=0;
		printf("Sum of integers:");

		while(1)
		{

			printf("Input a number:");
			scanf("%d",&num);

			if(num==0)
			{
				
				break;
			}

			if(num>0)
			{
				sum+=num;
				
			}

		}
	printf("sum of integers:%d",num);

return 0;
}


