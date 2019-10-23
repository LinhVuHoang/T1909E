#include<stdio.h>
int main(){
 int n;
 printf("nhap n : \n");
 scanf("%d",&n);
 for(int i=1;i<n;i++){
 	int dem=0;
 	if(i%3==0){
 		dem++;
	 }
	 if(dem!=0){
	 	printf("%d ",i);
	 }
 }
 return 0;
}
