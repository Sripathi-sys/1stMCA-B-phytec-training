//LCm of numbers (user input)


#include <stdio.h>


int main(){
	int a,b,max;


	printf("Enter the two numbers:");
	scanf("%d %d\n",&a,&b);


	if(a>b){
		max = a;


	}


	else{

		max = b;

	}



	while(1){
		if(max%a==0 && max%b==0){
			
			printf("LCM of %d and %d is %d",a,b,max);

			break;
		}
			
				max++;





		}
		return 0;
	}
