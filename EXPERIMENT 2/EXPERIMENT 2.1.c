/*Experiment 2: operators
1.Wap a C program to calculate the area and perimeter of a rectangle based on its lenghth and width.*/

 #include<stdio.h>
 int main()
 {
    printf("Mayank Singh\nSAP ID : 590026159\nCourse- Bsc Cs\nBatch-1");
    	printf("\n---------------------------------------------------------------------\n");
    	int per, ar, a,b;
    	printf("Enter width and length of the rectangle:");
    	scanf("%d%d", &a, &b);
    	per= 2*(a+b);
    	ar= a*b;
    	printf("The perimrter and area of the given rectangle is %d %d" ,per,ar);
    	return 0;
 }
