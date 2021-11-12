#include<stdio.h>
void main()
{
	int a,h,m;
	printf("enter minutes");
	scanf("%d",&a);
	printf("%d hours(s) %d minute(s)",h=a/60,m=a%60);
}
