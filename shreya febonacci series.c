#include<stdio.h>
int main(){
	int n,a=1,b=1,c,i=1;
	printf("Enter the numbers of terms: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
