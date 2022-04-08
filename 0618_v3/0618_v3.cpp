#include <stdio.h>
int main()
{
	char tim[]="2+2*3+2/2-1";
	char sum[100];

	int skr=-1;
	for(int i=0;i<100;i++)
	{
		if(tim[i]=='*')
		{
			int x=sum[skr]-'0';
			int y=tim[i+1]-'0';
			sum[skr]=x*y+'0';
			i++;
		}
		else if(tim[i]=='/')
		{
			int x=sum[skr]-'0';
			int y=tim[i+1]-'0';
			sum[skr]=x/y+'0';
			i++;
		}
		else
		{
			sum[++skr]=tim[i];
		}
	}
	int res=sum[0]-'0';
	for(i=0;i<100;i++)
	{
		if(sum[i]=='+')
		{
			res=res+(sum[++i]-'0');
		}
		else if(sum[i]=='-')
		{
			res=res-(sum[++i]-'0');
		}
	}
	printf("½á¹ûÎª:%d\n",res);
	return 0;
}