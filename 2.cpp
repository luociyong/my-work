#include <stdio.h>
int main()
{    
	long t;  
	int i = 2;  
	scanf("%d",&t);//����һ���� 
	/*��ѯ���������*/
	while(t>2)
	{  
		if(t%i==0)
		{ 	   
			t= t/i;        
		} 
		else i++;    
	}    
	printf("%d\n",i); //������������
	return 0;
}


