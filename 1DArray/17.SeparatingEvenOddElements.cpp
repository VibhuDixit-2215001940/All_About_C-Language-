//SEPARATING AND PRINTING EVEN AND ODD ELEMENTS IN SEPARATE ARRAY
#include<stdio.h>
int main(){
	int n,i,j=0,k=0,even=0,odd=0,b[100],c[100];
	printf("Enter the size of an array: ");		//Taking SiZe Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){		//Checking and saving of even elements
			b[j]=a[i];
			j++;
		}
		else{				//Checking and saving of odd elements	
			c[k]=a[i];
			k++;	
		}
	}
	printf("The even elements are: ");
	for(i=0;i<j;i++){		//Printing Of Even Elements
		printf("%d ",b[i]);
	}
	printf("\n");
	printf("The odd elements are: ");
	for(i=0;i<k;i++){		//Printing Of Odd Elements
		printf("%d ",c[i]);	
	}
}
