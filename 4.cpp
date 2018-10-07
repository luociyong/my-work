#include<stdio.h>
int substring(int x,int y)
{
	int i,j,k=0;
	char b[100],a[100];
	scanf("%s",a);
	for(i=x-1;i<y;i++)
	{
		b[k]=a[i];
		printf("%c",b[k]);
		k++;
	}
	printf("\n");
	return 0;
}
void main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	substring(m,n);
}


