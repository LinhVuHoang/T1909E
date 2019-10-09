#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2,delta;
	printf("nhap a:\n");
	scanf("%f",&a);
	printf("nhap b:\n");
	scanf("%f",&b);
	printf("nhap c:\n");
	scanf("%f",&c);
	delta = b*b-4*a*c;
	if(delta > 0){
		x1 = ((-b+sqrt(delta)))/(2*a);
		x2 = ((-b-sqrt(delta)))/(2*a);
		printf("phuong trinh co 2 nghiem x1 = %f - x2 = %f \n",x1,x2);
	}else{
		if(delta = 0){
			x1=-b/(2*a);
			printf("phuong trinh co nghiem kep x1=x2=%f\n",x1);
	}else{
		printf("phuong trinh vo nghiem");
	}
		}
	return 0;
	}


