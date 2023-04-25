//Progrmm To Square A No. Using Functions
#include <stdio.h>
int sqr(){
	int a;
	printf("Enter the value to find the square: ");
	scanf("%d",&a);
	printf("The square of %d is: %d ",a,a*a);
	return 0;
}
int main(){
	sqr();
	return 0;
}
