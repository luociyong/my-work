#include<stdio.h>
#define n 10
void main()
{
	int i,j,t,num[n];
	for(i=0;i<n;i++)
	    scanf("%d",&num[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
			if(num[j]>num[j+1])
		{
			t=num[j];
			num[j]=num[j+1];
			num[j+1]=t;
		}
		for(i=0;i<n;i++)
			printf("%5d",num[i]);
}