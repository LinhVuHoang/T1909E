#include<stdio.h>
void nhapmangso(int a[],int n){
	for(int i=0;i<n;i++){
		printf("nhap so thu %d:",i+1);
		scanf("%d",&a[i]);
	}
}
int timso(int a[],int n){
	int x;
	printf("nhap x: ");
	scanf("%d",&x);
	int i=0;
	for(i=0;i<n;i++){
		if(x==a[i]){
			printf("so nam trong mang");break;
		}
		}
	if(i>=n){
		printf("so khong nam trong mang");
	}
		}
int main(){
	int n;
	printf("nhap n : ");
	scanf("%d",&n);
	int a[n];
	nhapmangso(a,n);
	timso(a,n);
	return 0;
}
