#include <stdio.h>

	//modify the value using functions and pointers
	

	void modify(int *ptr)
	{
		*ptr=100;
}

//main

int main(){
	int num=10;

	printf("Before modifivation:%d",num);

	modify(&num);//declare functuon
		  
	printf("After modification: %d",num);

	return 0;
}


