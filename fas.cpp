#include<stdio.h>
int main(){
	int n;
	float v,s=1;
	printf("nhap n: ");
	scanf("%d",&n);
	float a[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d : ",i+1);
		scanf("%f",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			v=v+a[i];
		}else if(a[i]<0){
			s=s*a[i];
		}
		}
		printf("%f \n",v);
		printf("%f",s);
		
		return 0;
	}
