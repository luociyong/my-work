#include <stdio.h>
int main()
{
    int a,b,c,d,A;
    a=b=c=d=0;
    while((A=getchar())!='\n')
	{
        if(A>='0' && A<='9')
            a++;
        else if((A>='a' && A<='z')||(A>='A' && A<='Z'))
            b++;
        else if(A==' ')
            c++;
		else
			d++;
    }
    printf("���ָ���:%d\n", a);
	printf("��ĸ����:%d\n", b);
	printf("�ո����:%d\n", c);
	printf("�����ַ�����:%d\n", d);
    return 0;
}