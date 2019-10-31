#include<stdio.h>
int main(){
	int n;
	printf("nhap n : ",n);
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int x;
	printf("nhap x : ");
	scanf("%d",&x);
		int i=0;
	for( i=0;i<n;i++){
		if(x==a[i]){
		printf("x nam trong mang\n");
		printf("x nam tai vi tri gan nhat : %d ",i);
		break;
	}
	}
	if(i>= n){
		printf("so %d khong ton tai \n",x);
	}
	return 0;
}
