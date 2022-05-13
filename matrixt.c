//print a matrix 3*3 
#include<stdio.h>
#include<conio.h>
#define r 3
#define c 3
void main()
{
	int n[r][c],i,j;
	printf("Enter your %d values ", r*c);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&n[i][j]);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%5d",n[i][j]);
        printf("\n");
		
	}
}
