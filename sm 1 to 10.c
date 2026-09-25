#include<stdio.h>
int main(){
	int sum=0;
	int i=1;
	while(i<=10)
	{
		sum += i;
		i++;
	}
	printf("The sum of numbers from 1 to 10 is: %d\n", sum);
	return 0;
}
