//CHECKING PRESENCE OF AN ELEMENT

#include<stdio.h>
int main(){
	int n,i,key,flag,pos=0;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter an element to check its presence: ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			flag=1;pos=i+1;
			break;}	
	}
	if(flag==1)
		printf("ELEMENT FOUNDED!! AT %dINDEX",pos);
	else
		printf("ELEMENT NOT FOUNDED!!");	
}
