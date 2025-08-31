/*EXPERIMENT 1:Installation, environment setup and starting with c language
  4. write a program to perform four arithemetic operations on two variable
  */
#include <stdio.h>
int main()
{
    int a,b,sum,prod,sub; float div;//declaration
		printf("Mayank Singh\nSAP ID : 590026159\nCourse- Bsc Cs\nBatch-1");
    	printf("\n---------------------------------------------------------------------\n");	
	printf("Enter the number a and b");
	scanf("%d%d",&a, &b);
	sum =a+b ;
	prod =a*b;
	sub =a-b;
	div =(float) a/b;
	printf("the sum of a and b is %d \nthe difference of a and b is %d \nthe product of a and b is %d \n the divison of a and b is%.5f" ,sum,sub,prod,div);
	return 0;
	}
