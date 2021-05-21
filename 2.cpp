#include<stdio.h>
int main()
{
	int i,n,m,j,n1=0,n2=1,n3;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1,printf("Even: ");i<=n;i%2==0 && printf("%d ",i),i++){}
	for(i=1,printf("Odd: ");i<=n;i%2!=0 && printf("%d ",i),i++){}
	for(i=1,printf("Even till n: ");j<=n;i%2==0 && printf("%d ",i) && j++,i++){}
	for(i=1,j=1,printf("Odd till n: ");j<=n;i%2!=0 && printf("%d ",i) && j++,i++){}
	printf("\nEnter the value of m: ");
	scanf("%d",&m);
	for(i=1,j=1,printf("Table of n till m times:\n");j<=m;printf("%d ",n*i) && j++,i++){}
	for(i=1,j=1,printf("\nFirst m number of numbers divisible by n:\n");j<=m;i%n==0 && j++ && printf("%d ",i), i++){}
	for(printf("\nFibonacci till nth term:%d %d",n1,n2),i=2;i<n;(n3=n1+n2,printf(" %d",n3),n1=n2,n2=n3),++i){}
	for(n1=0,n2=1,n3=0,printf("\nFibonacci till n value:");n3<=n;printf(" %d",n3),n1=n2,n2=n3,n3=n1+n2){}
}
