#include<stdio.h>
int main(){
	int a[10];
	float v=0;
	for(int i=0;i<10;i++){
		printf("nhap so thu %d :",i);
		scanf("%d",&a[i]);
	}
	int dem=0,s=0;
	for(int i=0;i<10;i+=2){
		if(a[i]%2!=0){
			s=s+a[i];
			dem++;
		}
	}
	v=(float)s/dem;
	printf("trung binh so le o vi tri chan la : %f ",v);
return 0;

}
