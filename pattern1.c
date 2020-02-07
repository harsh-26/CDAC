#include<stdio.h>
int main()
{
	int count =1,s=1,i,j,user=6;
	char no='A',dummy='A';
	no=no+user-1;
	for(i=1;i<=user;i++)
	{
		for(j=no;j>='A';count++,dummy++)
		{
			if(count==user+1)
			{
				dummy ='A'+s-1;
				count=s;
			}
			if(count % user ==0)
			{
				j--;
				printf("%c",dummy);
				s=s+1;
			}
			else
			printf("%c",dummy);
		}
		no--;
		s=1;
		count=1;
		dummy='A';
		printf("\n");
	
	}
	getch();
	return 0;
}
