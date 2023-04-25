//Printing Second Largest & Second Smallest Elements

#include <stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++){		//Taking Values Of Array Elements
   		printf("Enter the value of index%d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){         //Sorting Array
        for(j=i+1; j<n ;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is: %d\n",a[n-2]);
    printf("The second largest element is: %d",a[1]);
}
