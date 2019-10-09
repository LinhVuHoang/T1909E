#include<stdio.h>;
int main(){
	int x,y;
	printf("nhap so x :\n");
	scanf("%d",&x);
	printf("nhap so y :\n");
	scanf("%d",&y);
	int temp=x;
	x=y;
	printf(" gia tri cua x la: %d\n",x);
	y=temp;
	printf("gia tri cua y la : %d\n",y);
	return 0;
}
