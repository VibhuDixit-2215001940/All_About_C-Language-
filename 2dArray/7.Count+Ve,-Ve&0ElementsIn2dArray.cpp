//Count +Ve, -Ve & 0 Elements In 2DArray
#include<stdio.h>
int main(){
	int a[3][3],i,j,c1=0,c2=0,c3=0;
	for(i=0;i<3;i++){			//Taking Values Of Matrix
		for(j=0;j<3;j++){			
			printf("Enter the value if index%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>0)		    //Counts +Ve Elements
				c1++;
			else if(a[i][j]==0)		//Counts 0 Elements
				c2++;
			else if(a[i][j]<0)		//Counts -Ve Elements
				c3++;
			else 
				printf("Null!!");
			}	
    }
    printf("Total no. of +Ve elements are: %d\n",c1);
    printf("Total no. of -Ve elements are: %d\n",c3);
    printf("Total no. of 0 elements are: %d\n",c2);
}
