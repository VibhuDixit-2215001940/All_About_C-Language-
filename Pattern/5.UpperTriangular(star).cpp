//* * * *
//* * *
//* * 
//*
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the limit to print: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){		//For printing rows
		for(j=1;j<=n+1-i;j++){	//For printing columns(=) is using beceuse we have to 
		//we have to print till i=j for m=n or 1=1 2=2 3=3 rows and columns
			printf("* ");
		}
		printf("\n");
	}
}      
