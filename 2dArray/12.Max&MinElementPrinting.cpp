//Find Out Max & Min Element In 2d array
#include<stdio.h>
int main(){
	int n,m,i,j;
	printf("Enter the size of rows: ");			//Taking Size Of Rows & Column
	scanf("%d",&n);
	printf("Enter the size of column: ");
	scanf("%d",&m);
	int a[n][m];
	for(i=0;i<n;i++){				//Inputing Vlues Of Elements
		for(j=0;j<m;j++){
			printf("Enter the value of index%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int max=a[0][0]; int min=a[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]>max)
				max=a[i][j];
			else if(a[i][j]<min)
				min=a[i][j];
		}
	}
	printf("Max element is: %d",max);
	printf("\nMin element is: %d",min);
}
