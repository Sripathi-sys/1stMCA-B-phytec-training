//Right angled pyramid with numbers


#include <stdio.h>

int main(){

	int rows;

	printf("enter the number of rows:");
	scanf("%d",&rows);


	int i,j;



//outer loop
	for(i=1;i<=rows;i++){

		//inner loop
		
			for(j=1;j<=i;j++){

				printf("%d",j);

			}
		printf("\n");

		}


		return 0;

}
