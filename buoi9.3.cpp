#include<stdio.h>
int main(){
	int n;
	printf("nhap n :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	return 0;
}
