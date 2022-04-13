#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int isope(char c)
{
	if(c=='+'||c=='-'||c=='*'||c=='/')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void move(char *p)
{
	while(*p!='\0')
	{
		*p=*(p+1);
		p++;
	}
}
void mace(float *p,float *end)
{
	while(p!=end)
	{
		*p=*(p+1);
		p++;
	}
}


int main()
{
	char tim[]="1-2.5*4+10.2/5.1";
	char sum[100];
	scanf("%s",sum);
	char oper[100]={'\0'};
	float ands[100];

	int operindex=0;
	for(int i=0;i<100;i++)
	{
		if(isope(sum[i]))
		{
			oper[operindex]=sum[i];
			operindex++;
		}
	}
    int skr=0;
	for(i=0;i<100;i++)
	{
		char tmp[100]={'\0'};
		int tmpinx=0;
		while(!isope(sum[i]))
		{
			tmp[tmpinx]=sum[i];
			i++;
			tmpinx++;
		}
	   float oatV=atof(tmp);
		ands[skr++]=oatV;
	}
    char *per=oper;
	float *por=ands;
	while(*per!='\0')
	{
		if(*per=='*')
		{
			float left=*por;
			float right=*(por+1);
			float res=left*right;
			*por=res;
			move(per);
			mace(por+1,&ands[operindex--]);
		}
		else if(*per=='/')
		{
			float left=*por;
		    float right=*(por+1);
			float res=left/right;
		    *por=res;
			move(per);
		    mace(por+1,&ands[operindex--]);
		}
		else
		{
			per++;
			por++;
		}
	}
    puts(oper);
	per=oper;
	por=ands;
	while(*per!='\0')
	{
		if(*per=='+')
		{
			float left=*por;
		    float right=*(por+1);
			float res=left+right;
		    *por=res;
			move(per);
		    mace(por+1,&ands[skr--]);
		}
		else if(*per=='-')
		{
			float left=*por;
		    float right=*(por+1);
			float res=left-right;
		    *por=res;
			move(per);
		    mace(por+1,&ands[skr--]);
		}
	}



	printf("½á¹ûÎª:%0.2f\n",ands[0]);
	return 0;
}




