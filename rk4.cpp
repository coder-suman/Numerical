# include <stdio.h>
#include <math.h>
float f(float x,float y){
	return(x+y);
}
main(){
	float x0,xn,y0,y1,h,k1,k2,k3,k4;
	printf("Enter the value of x0,y0,h,xn: ");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	do{
		printf("\n The value of y(%f)=%f",x0,y0);
		k1=h*f(x0,y0);
		k2=h*f(x0+h/2,y0+k1/2);
		k3=h*f(x0+h/2,y0+k2/2);
		k4=h*f(x0+h,y0+k3);
		y1=y0+(k1+2*k2+2*k3+k4)/6;
		y0=y1;
		x0=x0+h;
	}
	while(x0<=xn);
	}
