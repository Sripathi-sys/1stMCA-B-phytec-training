#include <stdio.h>
int main()
{
     unsigned int num=50;
     unsigned int *p;
    p=&num;
    printf("Address of p variable is %u \n");
    p=p+3;
    printf("After adding 3:Address of p variable is %u \n",p);
  return 0;
  
  
}
