#include<stdio.h>
int num[30000] = {1};
int l = 1;
void mult(int n)
{
    int i = 0;
	for(i=0;i<l;i++)
		num[i]*=n;
	for(i=0;i<l;i++)
	{
		if((num[i]/10)&&(i==l-1))l++;
		num[i+1]+=(num[i]/10);
		num[i]%=10;
	}
}
void print()
{
	int i = l-1;
    for(;i+1;i--)printf("%d",num[i]);
    puts(" ");
}
int mod(int x,int y)
{
	if(x==0)return 0;
	else
		return x%y;
}
int main()
{
	int n;
	int i;
	int x;
	printf("����һ������");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		mult(i);
	printf("���Ľ׳�Ϊ��");
	print();
    x=num[0]+num[1]*10;
	printf("mod 25 ��ֵΪ��%d\n",mod(x,25));
	return 0;
}

