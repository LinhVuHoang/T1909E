#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x,y,z;
	printf("nhap so a :\n");
	scanf("%f",&a);
	printf("nhap so b :\n");
	scanf("%f",&b);
	printf("nhap so c :\n");
	scanf("%f",&c);
	z=b*b;
	z=z-4*a*c;
	if(z<0){
		printf("phuong trinh vo nghiem");
	}else{
		if(z=0){
			x=-b/2*a;
			printf("phuong trinh co nghiem kep:%f\n",x);
		}else{
			x=-b+sqrt(z);
			x=x/2*a;
			printf("phuong trinh co 2 nghiem phan biet : %f\n",x);
			y=-b-sqrt(z);
			y=y/2*a;
			printf("phuong trinh co 2 nghiem phan biet :%f\n",y);
		}
	}
	return 0;
}
