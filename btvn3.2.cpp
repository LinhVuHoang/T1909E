#include<stdio.h>
int main(){
	int x;
	printf("nhap so x:\n");
	scanf("%d",&x);
	if(x>0){
		printf("day la so duong\n");
	}else{
		if(x<0){
			printf("day la so am\n");
		}else{
			printf("khong am khong duong");
		}
	}
	return 0;
}
