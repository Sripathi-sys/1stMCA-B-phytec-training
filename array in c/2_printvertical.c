#include <stdio.h>

int main(){
	int i;

	char arr[]="Sripathi";

	int length=sizeof(arr)/sizeof(arr[0]);

	for(i=0;i<=length;i++)
	{
		printf("%c\n",arr[i]);


	}

	return 0;
	}
