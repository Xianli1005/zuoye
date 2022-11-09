#include <stdio.h>
int max(int a[],int n)
{
int sum2=0,maxsum=0;
for(int i=0;i<n;i++)
{
	if(sum2<0)
		sum2=a[i];
	else
		sum2+=a[i];
if(maxsum<sum2)
	maxsum=sum2;
}
 return maxsum;
}

int main()
{
	int i ,N,maxsum;
	int num[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&num[i]);
	maxsum=max(num,N);
	printf("%d",maxsum);
	return 0;
}
