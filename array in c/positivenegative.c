#include <stdio.h>


int main(){

	int num[25];
	int i;


	for(i=0;i<25;i++){
		printf("Enter the numbers:");
		scanf("%d\n",&num[i]);

	}



	for (i=0;i<25;i++){
		if(num[i]>0){
			printf("The positive numbers are: %d\n",num[i]);
		}

		else{
			printf("The negative numbes are:%d\n",num[i]);
		}







	if(num[i] % 2==0){
		printf("The even numbers are:%d\n",num[i]);
	}

	else{

		printf("The odd numbers are:%d\n",num[i]);
	}
	}

	return 0;
}


