//Sum Of Row,Column & Diagonal Individually 
#include<stdio.h>
int main(){
	int n,m,i,j,s1=0,s2=0,s3=0;
	printf("Enter the size of rows: ");			//Taking Size Of Rows
	scanf("%d",&n);
	printf("Enter the size of column: ");		//Taking Size Of Column
	scanf("%d",&m);	
	int a[n][m];						//Declaring 2DArray
	for(i=0;i<n;i++){					//Taking Values Of Element
		for(j=0;j<m;j++){
			printf("Enter the values of index%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){					//Printing The Output	
		for(j=0;j<m;j++){
			s1=s1+a[i][j];				//Sum Of Rows
			s2=s2+a[j][i];				//Sum Of Column
			if(i==j){
				s3=s3+a[i][j];
			}
		}
	}
	printf("Sum Of Rows: %d\nSum Of Column: %d\nSum Of Diagonal: %d ",s1,s2,s3);
}
		


