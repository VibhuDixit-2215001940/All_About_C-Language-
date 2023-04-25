//MAX ELEMENT IN AN ARRAY

#include<stdio.h>
int main(){
	int n,i,max,pos=0;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			pos=i;
	}
	}
	printf("The max element is %d at %dINDEX!!",max,pos);
}
