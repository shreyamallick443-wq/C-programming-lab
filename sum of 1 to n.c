#include<stdio.h>
int main(){
	int n,sum=0;
	int i=1;
	printf("Enter the positive integer(n): ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum += i;
		i++;
	}
	printf("The sum of numbers 1 to %d is: %d\n",n,sum);
	return 0;
}
