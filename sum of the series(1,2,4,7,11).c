#include<stdio.h>
int main(){
	int n,i=1,term=1,sum=0,diff=1;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",term);
		sum=sum+term;
		term=term+diff;
		diff++;
		i++;
	}
	printf("sum of the given series:%d",sum);
	return 0;
}
