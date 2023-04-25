//Linear Search Using Pointers
#include<stdio.h>
int main(){
	int *p,i,n,key,f;
	printf("Enter the size of an array: ");		//Accessing Size Of An Array
	scanf("%d",&n);
	int a[n];			//Declaring An Array
	for(i=0;i<n;i++){			//Accessing An Array Elements
		printf("Enter the value of index%d: ",i);
		scanf("%d",&a[i]);
	}
	p=a;		//Provides Base Address To An Array
	printf("Enter the no. you want to search: ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(*p==key){
			f=1;
			break;
		}
		p++; 
	}
	if(f==1)
		printf("No. Founded!!");
	else
		printf("No. Not Founded!!");
}
