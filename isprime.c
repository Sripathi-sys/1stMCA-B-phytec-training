#include <stdio.h>

int main(){

	int num=2,i;
	


	for(num=2;num<=300;num++)	{
		
		int isprime=1;

			for(i=2;i*i<=num;i++){


				if(num % 1== 0){
					isprime=0;
					break;
				}
			}

				if(isprime){

				printf("%d",num);
				}

			}
			printf("\n");


				return 0;
	}

			
