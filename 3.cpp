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
    printf("数字个数:%d\n", a);
	printf("字母个数:%d\n", b);
	printf("空格个数:%d\n", c);
	printf("其他字符个数:%d\n", d);
    return 0;
}