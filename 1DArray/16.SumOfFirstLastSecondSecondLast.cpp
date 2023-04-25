//SUM OF FIRST AND LAST.......SECOND AND SECOND LAST SECOND SO ON

#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n+1];				//EXTRA BLOCK FOR INSERTION 
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=j;i++){
		for(j=n-1;i<=j;j--)
		printf("%d",a[i]+a[j]);
	}
}
