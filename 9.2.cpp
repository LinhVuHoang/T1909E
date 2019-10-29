#include<stdio.h>
void timsole(int a[],int n){
	for(int i=0;i<n;i++){
		printf("nhap so thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%d  ",a[i] );
		}
	}
}
int main(){
	int n;
	printf("nhap n : ");
	scanf("%d",&n);
	int a[n];
	timsole(a,n);
	return 0;
}
