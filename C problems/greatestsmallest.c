#include <stdio.h>
#include <stdlib.h>


int main(){

	int a,b,c,d;
	int largest,smallest;

	printf("enter four number");
	scanf("%d%d%d%d",&a,&b,&c,&d);
//assume a = larget and smallest
     a = largest;

	if(b>a){
		b= largest;
		}

	if(c>b){

		c= largest;
	}

	if(d>c){
		d = largest;
	}


a= smallest;
	if(b<a){
		b = smallest;
	}

	if(c<b){

		c= smallest;

	}

	if(d<c){

		d= smallest;
	}


	printf("the largest %d",largest);
	printf("the smallest numbers is %d",smallest);


	return 0;

}
