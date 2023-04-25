//1
//1 2 
//1 2 3 
//1 2 3 4 
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the limit to print: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){		//For printing rows
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}      
