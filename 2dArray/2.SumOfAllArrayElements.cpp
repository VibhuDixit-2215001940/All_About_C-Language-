//Sum Of All Array Elements 
#include<stdio.h>
int main(){
	int n,m,i,j,sum=0;
	printf("Enter the size of rows: ");			//Taking Size Of Rows
	scanf("%d",&n);
	printf("Enter the size of column: ");		//Taking Size Of Column
	scanf("%d",&m);	
	int a[n][m];						//Declaring 2DArray
	for(i=0;i<n;i++){					//Taking Values Of Element
		for(j=0;j<m;j++){
			printf("Enter the velues of index%d%d: ",i,j);
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	for(i=0;i<n;i++){					//Printing The Output	
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	printf("The sum of all array elements are: %d",sum);//Printing Sum
}
