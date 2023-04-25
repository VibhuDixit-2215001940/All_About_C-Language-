//Product of two arrays
#include<stdio.h>
int main(){
	int n,i,m;
	printf("Enter the size of an array1: ");		//Taking Size Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the size of an array2: ");		//Taking Size Of An Array
	scanf("%d",&m);
	int b[m],c[m];
	for(i=0;i<m;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&b[i]);
	}
	if(m==n){
		for(i=0;i<m;i++){
			c[i]=a[i]*b[i];
		}
		printf("The product of array are: ");
		for(i=0;i<m;i++){
			printf("%d ",c[i]);
		}
	}
	else{
		printf("The array are of diff. size!!");
	}
}
