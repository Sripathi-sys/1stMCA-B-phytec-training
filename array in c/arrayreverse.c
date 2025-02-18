#include <stdio.h>
#define SIZE 5  //Define the size of the array
int main(){
	int n=5;
	int arr1[SIZE]={1,2,3,4,5};
	int arr2[SIZE];

for(int i=0;i<SIZE;i++){
	printf("Orginal order:%d",arr1[i]);

}

for(int i=0;i<SIZE;i++){
	 arr2[i]=arr1[SIZE-1-i];

}

printf("\nreversed array:");
for(int i=0;i<SIZE;i++){

	printf("%d",arr2[i]);

}


return 0;
}

	

