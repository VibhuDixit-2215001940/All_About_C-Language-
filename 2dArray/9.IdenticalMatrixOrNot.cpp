//Check Whether Two Matrix Are Identical Or Not
#include<stdio.h>
int main(){
	int a[3][3],b[3][3],i,j,flag=0;
	for(i=0;i<3;i++){				//Taking Values Of Matrix1
		for(j=0;j<3;j++){
			printf("Enter the value of inedx%d%d of Matrix1: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){				//Taking Values Of Matrix2
		for(j=0;j<3;j++){
			printf("Enter the value of inedx%d%d of Matrix2: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){		//Checking Identical Or Not
		for(j=0;j<3;j++){
			if(a[i][j]!=b[i][j])
				flag=1;
			}
		}
	if(flag==0){	
		printf("IDENTICAL MATRIX!!");
	}
	else{
		printf("NO A IDENTICAL MATRIX!!");
	}
}
