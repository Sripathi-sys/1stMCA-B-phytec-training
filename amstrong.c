#include <stdio.h>

int main(){


	int num,original,digit,sum;
	printf("The amstrong number 1 to 500:\n");




	for(int num=1;num<=500;num++)
	{

		original = num;

		sum = 0;

		while(original>0){

			digit= original %10;
			sum+=digit*digit*digit;
			original/=10;
		
		}


		if(sum==num){


			printf("%d\n",num);

		}

		}
	return 0;
}







