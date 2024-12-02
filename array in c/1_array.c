
//copy the char
#include <stdio.h>


int main()
{
	
	char  arr[]="sripathi";
	char copy[10];

	int length=sizeof(arr)/sizeof(arr[0]);

	int i;	



	for(i=0;i<=length;i++)
	{
		copy[i]=arr[i];
		printf("%c",arr[i]);

	}
	copy[i]='\0';

	return 0;
}
