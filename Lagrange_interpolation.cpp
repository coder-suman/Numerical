#include<stdio.h>
#include<math.h>
int main(){
	float x[20],y[20],X,prod,sum=0.0;
	int n;
	printf("Enter the number of process: ");
	scanf("%d",&n);
	printf("Enter the value of X where y required.");
	scanf("%f",&X);
	printf("Enter the value of x and y: ");
	printf("\nx\ty=f(x)\n");
	for(int i=0;i<n;i++){
		scanf("%f\t%f",&x[i],&y[i]);
	}
	for(int i=0;i<n;i++){
		prod=y[i];
		for(int j=0;j<n;j++){
			if(j!=i){
				prod=prod*(X-x[j])/(x[i]-x[j]);
			}
		}
		sum=sum+prod;
	}
		
	printf("Y=%f",sum);
	return 0;
}
