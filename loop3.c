#include <stdio.h>


	int main(){
		int positivecount=0;
		int negativecount=0;
		int Zerocount=0;
		int n;
		int num;

		printf("Enter the number of valuesyou want to input:");
		scanf("%d",&n);



		for (int i=0;i<5;i++)
		{
			printf("Enter the numbers:\n");
			scanf("%d",&num);

		

		if(num>0){

			positivecount++;
		}

		else if(num<0){
			negativecount++;
		}

		else{

			Zerocount++;

		}

	}
	
	printf("\nCount of positive numbers:%d\n",positivecount);
	printf("Count of negative numbers:%d\n",negativecount);
	printf("count of Zeros:%d\n",Zerocount);

	return 0;

	}
