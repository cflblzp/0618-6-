#include <stdio.h>
int main()
{
	char tim[]="1+2+2+1+2+5+4-1-3+4-8";
	int res=tim[0]-'0';
	for(int i=0;i<21;i++)
	{
		if(tim[i]=='+')
		{
			int x=tim[i+1]-'0';
			res+=x;
			i++;
		}
		else if(tim[i]=='-')
		{
			int y=tim[i+1]-'0';
			res-=y;
			i++;
		}
	}
	printf("½á¹ûÎª:%d\n",res);
	return 0;
}