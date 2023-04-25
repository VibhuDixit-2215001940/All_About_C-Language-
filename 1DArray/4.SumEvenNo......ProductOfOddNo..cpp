//SUM OF ALL EVEN ELEMENTS*******PRODUCT OF ALL ODD ELEMENTS

#include<stdio.h>
int main(){
	int n,i,sum=0,pro=1;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){		//Adding Even elements
			sum=sum+a[i];
		}
		else{				//Producting Odd elements
			pro=pro*a[i];
		}
	}
	printf("The sum of elements of even no. are:%d ",sum);
	printf("The product of elements of odd no. are:%d ",pro);
}
