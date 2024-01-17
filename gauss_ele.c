#include <stdio.h>
#include <math.h>
#define size 20
int main(){
	int n,i,j,k;
	float a[size][size],x[size],m,s=0.0;
	printf("Enter the order of coefficient of matrix: ");
	scanf("%d",&n);
	printf("Enter the argument of matrix: ");
	for(i=1;i<=n;i++){
		for(j=1;j<=n+1;j++){
			scanf("%f ",&a[i][j]);
		}printf("\n");
	}
	for(i=1;i<=n+1;i++){
		for(j=i+1;j<=n;j++){
			m=a[j][i]/a[i][i];
			for(k=1;k<=n+1;k++){
				a[j][k]=a[j][k]-m*a[i][k];
			}
		}
	}
	printf("Enter upper triangular matrix: \n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n+1;j++){
			printf("%f\t",a[i][j]);
		}printf("\n");
	}
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--){
		s=0.0;
		for(j=i+1;j<=n;j++){
			s=s+a[i][j]*x[j];
			x[i]=(a[i][n+1]-s)/a[i][j];
		}
	}
	printf("\n\n The required solution is \n");
	for(i=1;i<=n;i++){
		printf("x[%d]=%4.3f \n",i,x[i]);
	}
	return 0;
}
