//PRIME NO. ELEMENTS PRINTING

#include<stdio.h>
int main(){
	int n,i,value,pos,j,k,flag;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n+1];				//EXTRA BLOCK FOR INSERTION 
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		k=a[i];			//Taking Elements One By ONe 
		flag=0;
		for(j=2;j<=n/2;j++){
			if(k%j==0){			//Checking Even OR not
				flag=1;
				break ;
			}
		}
		if(flag==0){
			printf("%d is a prime\n",k);
		}
}
}
