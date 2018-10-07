#include <stdio.h>
int main()
{    
	long t;  
	int i = 2;  
	scanf("%d",&t);//输入一个数 
	/*查询最大质因数*/
	while(t>2)
	{  
		if(t%i==0)
		{ 	   
			t= t/i;        
		} 
		else i++;    
	}    
	printf("%d\n",i); //输出最大质因数
	return 0;
}


