/*Experiment 2: Operators
4. Write a program to find roots of the quadratic equations.*/
#include<stdio.h>
#include <math.h>
int main()
{
	double a, b, c, x1, x2;
		printf("Mayank Singh\nSAP ID : 590026159\nCourse- Bsc Cs\nBatch-1");
    	printf("\n---------------------------------------------------------------------\n");
    	printf("enter the coefficient of x^2, x and the constant of quadratic equation:");
    	scanf("%lf%lf%lf", &a, &b, &c);
    	printf("Your Quadratic equation is: %lfx^2+(%lfx)+(%lf)=0 \n", a, b, c);
    	if((sqrt((b*b)-(4*a*c)))<0)
    	{printf("Roots of the given functions does not exist and thus imaginary");
		}
		else
		{
	        x1=(sqrt((b*b)-(4*a*c))-b)/(2*a);
	        x2=-(sqrt((b*b)-(4*a*c))+b)/(2*a);
	        
			printf("Roots of the given functions are %lf %lf", x1, x2);
		}
		return 0;
}


















































