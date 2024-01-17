#include<stdio.h>
#include<math.h>
float f(float x){
	return((x*x*x)-x-1);
}
float df(float x){
	return ((3*x*x)-1);
}
int main(){
	float a,b,c,e;
	int k=0;
	//taking input
	printf("Enter the accuracy: ");
	scanf("%f",&e);
	do{
		printf("Enter the intervals of a,b: ");
		scanf("%f%f",&a,&b);
	}while(f(a)*f(b)>0.0);
	c=(a+b)/2.0;
	do{
		c=c-f(c)/df(c);
		printf("\nk=%d\ta=%f\tb=%f\tc=%f\tf(c)=%f",k,a,b,c,f(c));
		k++;
	}while(fabs(f(c))>e);
	printf("\nRoot is : %f",c);
	printf("\nIteration is: %d",k);
	
	
}
