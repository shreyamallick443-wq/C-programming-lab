#include<stdio.h>
int main(){
	float length,breath,area,perimeter;
	printf("Enter the length of the retangle: ");
	scanf("%f", &length);
	printf("Enter the breath of the retangle: ");
	scanf("%f", &breath);
	area=length * breath;
	perimeter= 2 * (length + breath);
	printf("area of the retangle: %.2f\n",area);
	printf("perimeter of the retangle: %.2f\n",perimeter);
	return 0;
}
