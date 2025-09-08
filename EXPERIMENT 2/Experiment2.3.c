 /*EXPERIMENT 2: Operators
       3: write a c program to calculate compound intrest*/
       #include<stdio.h>
       #include<math.h>
       int main()
       {
       		printf("Mayank Singh\nSAP ID : 590026159\nCourse- Bsc Cs\nBatch-1");
    	printf("\n---------------------------------------------------------------------\n");
    	double p,ci,l,r,n,k;
    		printf("enter principal amount, rate,number of compounding periods");
    		scanf("%lf%lf%lf",&p,&r,&n);
    		k=(1+(r/100));
    		l=pow(k,n);
    		ci=(p*l)-p;
    		printf("The compound intrest is %lf",ci);
    		return 0;
	   }
