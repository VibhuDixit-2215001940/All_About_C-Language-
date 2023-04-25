//Sum Of Major & Minor Diagonal Of Matrix
#include<stdio.h>
int main(){
	int n,m,i,j,sum=0,sum2=0;
	printf("Enter the size of rows: ");
	scanf("%d",&n);
	printf("Enter the size of column: ");
	scanf("%d",&m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter the value of index%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==j){
				sum=sum+a[i][j];
			}	
			else if(i+j==2){
				sum2=sum2+a[i][j];
			}}}
	printf("Sum Of Minor:%d",sum2);
	printf("\nSum Of Majsor:%d",sum);
	}
