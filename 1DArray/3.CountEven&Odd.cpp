//COUNT TOTAL EVEN AND ODD ELEMENTS IN AN ARRAY

#include<stdio.h>
int main(){
	int n,i,even=0,odd=0;
	printf("Enter the size of an array: ");		//Taking SiZe Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){		//Counting Even elements
			even++;
		}
		else{				//Counting Odd elements
			odd++;
		}
	}
	printf("Total Even No.:%d\nTotal Odd No.:%d",even,odd);
}
