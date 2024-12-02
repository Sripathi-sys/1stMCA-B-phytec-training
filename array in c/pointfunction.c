//no return with argument
//pointers
//array

#include <stdio.h>

void add(int a,int b)
{
	printf("Sum is:%d\n",a+b);

}

void substract(int a,int b)
{
	printf("substract is:%d\n",a-b);
}

//main function

int main(){


//declare  array of function with pointers

	void (*operations[])(int,int)={&add,&substract};
//loop because to call both functions
	for(int i=0;i<2;i++)

	{

		operations[i](10,5);
	}

	return 0;
	

}
