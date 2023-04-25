//INSERTING AN ELEMENT AT THE START OF AN ARRAY

#include<stdio.h>
int main(){
	int n,i,value,pos;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n+1];				//EXTRA BLOCK FOR INSERTION 
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	//printf("Enter the INDEX to insert an element: ");
	//scanf("%d",&pos);
	printf("Enter the value of an element: ");
	scanf("%d",&value);
	for(i=n;i>=0;i--){
		a[i]=a[i-1];
	}
	a[0]=value;
	printf("UPDATED ARRAY!!");
	for(i=0;i<=n;i++)
		printf("%d ",a[i]);
}
