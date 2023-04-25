//SUM OF TWO ARRAYS & STORE IT INTO THIRD ARRAY 

#include <stdio.h>
int main(){
	int n,i,j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++){
		printf("Enter the elements of array1: ");
		scanf("%d",&a[i]);
		printf("Enter the elements of array2: ");
		scanf("%d",&b[i]);
		c[i]=a[i]+b[i];
	}
	printf("The sum of array1 & array2 are: ");
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
}
