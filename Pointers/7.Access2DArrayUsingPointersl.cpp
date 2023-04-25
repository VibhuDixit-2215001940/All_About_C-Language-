//Accees Elements Of 2D Array Using Pointers
#include<stdio.h>
int main(){
	int n,m,i,j;
	printf("Enter the size of rows of an array: ");
	scanf("%d",&n);
	printf("Enter the size of columns of an array: ");
	scanf("%d",&m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter the value of index[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",*(*(a+i)+j));
		}
		printf("\n");
	}
}
