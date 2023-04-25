//REVERSING AN ARRAY

#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){		//n-1 because n is a size not an INDEX 
		printf("%d ",a[i]);
	}
}
