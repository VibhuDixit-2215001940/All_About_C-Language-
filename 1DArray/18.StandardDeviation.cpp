//STANDARD DEVIATION(Mean , Varience & standard deviation 
#include<stdio.h>
#include<math.h>
int main(){
	float a[50],sum=0,mean,sum1=0,var,sd;
	int i,n,j,k;
	printf("Enter the size of an array: ");
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		printf("Enter the value of index%d: ",i);
		scanf("%f",&a[i]);
	}
	for(j=0;j<n;j++){
		sum=sum+a[j];
	}
	mean=sum/n;
	for(k=0;k<n;k++){
		sum1=sum1+(mean-a[k])*(mean-a[k]);
	}
	var=sum1/n;
	sd=sqrt(var);
	printf("Mean is %f\nVariance is %f\nStandard Deviation is %f",mean,var,sd);
}
