#include<stdio.h>
#include<math.h>
int main(){
	float x[15],y[15],X,prod=1,s,h,d;
	int n;
	printf("Enter the number of points: ");
	scanf("%d",&n);
	printf("Enter the value of X: ");
	scanf("%f",&X);
	printf("Enter the value of x and y: ");
	printf("\nx\ty=f(x)\n");
	for(int i=1;i<=n;i++){
		scanf("%f\t%f",&x[i],&y[i]);
	}
	h=x[2]-x[1];
	printf("\nh=%f",h);
	s=((X-x[0])/h);
	d=y[1];
	printf("s=%f\td=%f",s,d);
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
			y[j]=y[j+1]-y[i];
			printf("\n%f\n",y[j]);
		}
		prod=prod*(s-i+1)/i;
		d=d+prod*y[i];
		printf("\n%f",d);
	}
	printf("\nThe result is: ");
	printf("y(%1.2f)=%3.5f",X,d);
	return 0;
	
}

