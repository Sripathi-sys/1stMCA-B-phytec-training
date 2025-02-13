#include <stdio.h>

int main(){


	int rows=7;
	int i=1;

	while(i<=rows){

		int spaces =rows-i;
		while(spaces>0){

			printf(" ");
			spaces--;
		}

		int k=1;

		while(k<=2*i-1){
			printf("*");
			k++;

		}

		printf("\n");
		i++;
	}
		return 0;

	}
