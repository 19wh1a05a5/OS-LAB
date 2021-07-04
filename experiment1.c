#include<stdio.h>
int main()
{
	int n;
	printf("enter nof of processors:");
	scanf("%d",&n);
	float avg_time,wait_time=0;
	int arrival[n],exe[n],s[n],i;
	s[0]=0;
    printf("enter the arrival time");
	for(i=0;i<n;i++)
	{
	float avg_time,wait_time=0;
		scanf("%d",&arrival[i]);
	}
	printf("enter the execution time");
	for(i=0;i<n;i++)
	{
		scanf("%d",&exe[i]);
	}
	printf("service time of processor %d\n",s[i]);
	for(i=0;i<n;i++)
	{
		s[i]=s[i-1]+exe[i-1];
		printf("%d\n",s[i]);
	}
	for(i=1;i<n;i++)
	{
		wait_time+=s[i]-arrival[i];
	}
	avg_time=wait_time/n;
	printf("average waiting time:%f",avg_time);
	
	return 0;
}
