//Merging Of Two Arrays
#include<stdio.h>
int main(){
	int a[20],b[10],m,n,i,j,k,temp;
	for(i=0;i<10;i++){				//Taking Value For Array2
		printf("Enter the value of index%d of array 1: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){				//Taking Value For Array1
		printf("Enter the value of index%d of array 2: ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++){				//Sorting Of First Array
	for(j=0;j<10-1-i;j++){
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
	for(i=0;i<10;i++){				//Sorting Of Second Array
	for(j=0;j<10-1-i;j++){
		if(b[j]>b[j+1]){
			temp=b[j];
			b[j]=b[j+1];
			b[j+1]=temp;
		}
	}
}
	printf("ARRAY1: ");				//Printing Array1
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("ARRAY2: ");				//Printing Array2
	for(i=0;i<10;i++){
		printf("%d ",b[i]);
	}
	for(i=0;i<=20;i++){				//Merging Command
		a[10+i]=b[i];
	}
	printf("The Merged Arrays Are: ");				//Printing Merged Arrays
	for(j=0;j<=20;j++){
		printf("%d ",a[j]);
	}
}
