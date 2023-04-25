//Using Bubble Sort Making Array In Ascending order
#include<stdio.h>
int main(){
	int n,i,k,b,j,temp=0;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the value of index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(b=0;b<n-1;b++){
	for(k=0;k<n-1;k++){
		if(a[k]>a[k+1]){
			temp=a[k];
			a[k]=a[k+1];
			a[k+1]=temp;
		}
	}
}
	printf("The ascending order is: ");
	for(j=0;j<n;j++){
		printf("%d ",a[j]);
	}
}
