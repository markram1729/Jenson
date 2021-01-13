/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long n,k,d;
	long long *a;
	int t;
	int test;
	scanf("%d",&test);
	
	printf("test:%d",test);
	for (t=0;t<test;t++){
	
	scanf("%d %d %d",&n,&k,&d);
	
	int i;
	a = (long long*)malloc(n*sizeof(long long));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		/*printf("a:%d\n",a[i]);*/
	}
	/*long long x=0;
	for(i=0;i<n;i++)
	{
		x=x+a[i];
	}
	/*printf("x:%d\n",x);*/
	/*if(k==0)
	long long p;
	p = x/k;
	
	if(x<k)
	{
		printf("0");
	}
	else
	{	
		if(p<d)
		{
			printf("%d\n",p);
		}
		else
		{
			printf("%d\n",d);
		}
	}
	}
return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,k,d;
	int *a;
	int t;
	int test;
	scanf("%d",&test);
	
	/*printf("test:%d",test);*/
	for (t=0;t<test;t++){
	
	scanf("%d %d %d",&n,&k,&d);
	
	int i;
	a = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		/*printf("a:%d\n",a[i]);*/
	}
	int x=0;
	for(i=0;i<n;i++)
	{
		x=x+a[i];
	}
	/*printf("x:%d\n",x);*/
	int p;
	if(k==0)
	{
	    printf("0\n");
	}
	else {
	p = x/k;
	
	if(x<k)
	{
		printf("0");
	}
	else
	{	
		if(p<d)
		{
			printf("%d\n",p);
		}
		else
		{
			printf("%d\n",d);
		}
	}
	}
	}
return 0;
}
