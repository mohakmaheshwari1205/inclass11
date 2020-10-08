#include<stdio.h>
void main()
{
	int a,i,j,k;
	printf("Enter a number ");
	scanf("%d",&a);
	for(i=2;a!=1;i++)
	{
		while(a%i==0)
		 {
		    printf("%d ",i);
			 a=a/i;	
		 }
	}
}
