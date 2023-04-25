//SWAPING OF LARGEST AND SMALLEST ELEMENT OF AN ARRAY
#include<stdio.h>
int main(){
	int n,i,max,min,maxpos,minpos,temp;
	printf("Enter the size of an array: ");
	scanf("%d",&n);	
	int a[n];
	for(i=0;i<n;i++){			//Taking Vlues Of Elements
		printf("Enter the value of index%d: ",i);
		scanf("%d",&a[i]);
	}
	max=a[0];min=a[0];maxpos=0;minpos=0;
	for(i=1;i<n;i++){			//Finding Mx&Min Value With Position
		if(a[i]>max){
			max=a[i];
			maxpos=i;
		}
		else if(a[i]<min){
			min=a[i];
			minpos=i;
		}
	}
	temp=a[maxpos];				//Swaping Max&Min Values
	a[maxpos]=a[minpos];
	a[minpos]=temp;
	printf("After interchanging array element are: ");
	for(i=0;i<n;i++){			//Finally Printing An Array
		printf("%d ",a[i]);
	}
}
