#include<stdio.h>
int main(){
	int i,j;
	
	for(i=1;i<=4;i++)
	{
		for(j='A';j<='T';)
		{
			printf("%c",j);
			j=j+i;
		}
		printf("\n");
	}
	getch();
	return 0;
}