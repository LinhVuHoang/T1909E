#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap canh :\n");
	scanf("%d",&a);
	printf("nhap canh :\n");
	scanf("%d",&b);
	printf("nhap canh :\n");
	scanf("%d",&c);
	while((a<=0)||(b<=0)||(c<=0)){
	printf("ban da nhap sai vui long nhap lai : \n");
	printf("nhap canh :\n");
	scanf("%d",&a);
	printf("nhap canh :\n");
	scanf("%d",&b);
	printf("nhap canh :\n");
	scanf("%d",&c);
	}
	return 0;
}
