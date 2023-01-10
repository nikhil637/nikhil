#include<stdio.h>
int main()
{
	int n,i;
	int t1=0,t2=1;
	int nextterm = t1+t2;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("fibonacci series:%d,%d",t1,t2);
	for(i=1;i<=n;++i)
	{
		printf("%d\n",nextterm);
		t1=t2;
		t2=nextterm;
		nextterm=t1+t2;
	}
	return 0;
}
