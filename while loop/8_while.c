//smallest of three numbers
//using conditions
//
#include <stdio.h>

int main(){

	int n1,n2,n3,n4;

	printf("Enter the Four numbers:");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);


	if(n1<n2)
	{

		if(n1<n3)
		{

			if(n1<n4)
			{

				printf("%d",n1);
			}
			
			else
			{
				printf("%d",n4);
			}
		}

		else		
		{
			if(n3<n4)
			{
				printf("%d",n3);
			}
			else
			{
			printf("%d",n4);

			}
	
		}
	}

		else

		{
			if(n2<n3)
			{
				
				if(n2<n4)
				{
					printf("%d",n2);

				}
				else
				{
					printf("%d",n4);
				}
			}

			else
			{
				if(n3<n4)
				{
					printf("%d",n3);
				}
					
				else
				{
					printf("%d",n4);

				}

			}
		}
}
