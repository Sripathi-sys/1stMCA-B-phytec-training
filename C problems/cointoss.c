

//probality of finding heads when 3 coins tossed simultaneously


#include <stdio.h>

int main(){
	
	int totaloutcomes = 0;

	int headcount[4]={0};

	//loop
	

for(int i=0;i<8;i++){

	int coin1 = (i>>2)&1;
	int coin2 = (i>>1)&1;
	int coin3 = i&1;

	int heads = coin1+coin2+coin3;
	
	headcount[heads]++;
	totaloutcomes++;

}

printf("Total possible outcomes: %d\n",totaloutcomes);

for(int i=0;i<=3;i++){

	float probability = (float)headcount[i]/totaloutcomes;

	printf("probability of getting %d head(s):%2f\n",i,probability);
}
	return 0;

}



