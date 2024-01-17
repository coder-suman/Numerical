
#include<stdio.h>
#include<math.h>
float f(float x){
	return (x*x*x-9*x+1);
}
int main(){
	float a,b,e,c;
	int k=0;
	printf("Enter the accuracy: ");
	scanf("%f",&e);
do{
	printf("Enter the interval of a,b: ");
	scanf("%f%f",&a,&b);
}while(f(a)*f(b)>0.0);
do{
	c=(a+b)/2.0;
	printf("\n k=%d\ta=%f\tb=%f\tc=%f\tf(c)=%f",k,a,b,c,f(c));
	if(f(a)*f(c)<0.0){
		b=c;
	}else{
		a=c;
	}k++;
}
	while(fabs(f(c))>e);
	printf("Root of the equation is: %f",c);
	printf("The number of iteration is: %d",k);
	return 0;
}
