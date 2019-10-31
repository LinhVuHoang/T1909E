#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int dem=0,max_dem=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			dem+=a[i];
		}else{
			dem=0;
		}
		if(dem>max_dem){
			max_dem=dem;
		}
	}
	printf("chuoi tong so duong lon nhat :%d  ",max_dem);
	
	return 0;
}
