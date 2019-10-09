#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,p,v,s;
	printf("nhap so a:\n");
	scanf("%d",&a);
	printf("nhap so b:\n");
	scanf("%d",&b);
	printf("nhap so c:\n");
	scanf("%d",&c);
	v=0;
	s=0;
	p=0;
	if(a>0){
		printf("a la canh ben\n");
	}
	if(b>0){
		printf("b la canh ben\n");
	}
	if(c>0){
		printf("c la canh huyen\n");
	}
	v=a+b;
	v=v+c;
	printf("chu vi tam giac la: %d\n",v);
	p=v/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("dien tich tam giac la:%d \n",s);
	return 0;
}
