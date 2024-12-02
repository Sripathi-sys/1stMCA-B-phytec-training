//array with pointers


#include <stdio.h>
{
	int arr[]={1,2,3,4,5};
	*ptr=arr;

	printf("Array element using pointer:\n");


	//loop 
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
	}

	printf("\n");
	return 0;

}
