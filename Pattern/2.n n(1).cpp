//1 1 1 1 
//1 1 1 1
//1 1 1 1
//1 1 1 1
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the limit to print: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){		//For printing rows
		for(j=0;j<n;j++){	//For printing columns
			printf("1 ");
		}
		printf("\n");
	}
}      
