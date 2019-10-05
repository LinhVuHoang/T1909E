#include<stdio.h>
int main(){
	int a,b,c,min,max;
	printf("nhap so thu nhat\n",a);
	scanf("%d",&a);
	printf("nhap so thu hai\n",b);
	scanf("%d",&b);
	printf("nhap so thu 3\n",c);
	scanf("%d",&c);
    max=min=a;
	if(b>max);
	max=b;
	if(c>max);
	max=c;
	printf("so lon nhat %d\n",max);
	if(b<min);
	min=b;
	if(c<min);
	min=c;	
	printf("so be nhat %d\n",min);
	return 0;
}
