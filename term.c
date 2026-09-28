#include<stdio.h>
int main(){
	int term=2,i=1,sum=0,n;
	printf("Enter the number of term: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
	printf("sum of the series=%d",sum);
}
