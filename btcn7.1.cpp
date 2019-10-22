#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
		for(int i=n-1;i<n;i--){
		if(a[i]%2!=0){
			printf("%d",a[i]);
			break;
		}
	}
	return 0;
}
