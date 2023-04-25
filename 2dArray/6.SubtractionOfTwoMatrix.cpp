//Subtraction Of Two Matrix
#include<stdio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],i,j;
	for(i=0;i<3;i++){		//Taking value of matrix1
		for(j=0;j<3;j++){
			printf("Enter the value of index%d%d of Matrix1: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){		//Taking value of matrix2
		for(j=0;j<3;j++){
			printf("Enter the value of index%d%d of Matrix2: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("The Sum Of Two Matrix Are: \n");
	for(i=0;i<3;i++){		//Subtracting Both Matrix
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]-b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
