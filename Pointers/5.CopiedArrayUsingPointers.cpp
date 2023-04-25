//Copy An Array Using Pointers
#include<stdio.h>
int main(){
	int *p,*q,i,n;
	printf("Enter the size of an array: ");		//Accessing Size Of An Array
	scanf("%d",&n);
	int a[n],b[n];			//Declaring An Array
	for(i=0;i<n;i++){			//Accessing An Array Elements
		printf("Enter the value of index%d: ",i);
		scanf("%d",&a[i]);
	}
	p=a;		//Provides Base Address To An Array
	printf("Array elements are: \n");
	for(i=0;i<n;i++){
		printf("%d\n",*p);		//Calling one by one address of elements
		p++;				//Increasing Address One By One 
	}
	q=a;
	printf("Copied Array elements are: \n");
	for(i=0;i<n;i++){
		printf("%d\n",*q);		//Calling one by one address of elements
		q++;				//Increasing Address One By One 
	}	
}
