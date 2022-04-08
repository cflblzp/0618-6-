#include <stdio.h>
int main()
{
	char tim[]="2*2/4*1/1*2*3/2";
	int res=tim[0]-'0';
	for(int i=0;i<21;i++)
	{
		if(tim[i]=='*')
		{
			int x=tim[i+1]-'0';
			res=res*x;
			i++;
		}
		else if(tim[i]=='/')
		{
			int y=tim[i+1]-'0';
			res=res/y;
			i++;
		}
	}
	printf("½á¹ûÎª:%d\n",res);
	return 0;
}