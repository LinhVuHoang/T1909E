#include<stdio.h>
int main(){
	int a[9]={3,1,99,23,11,5,9,12,8};
	int temp;
	for(int i=0;i<9;i++){
		for(int j=0;j<9-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<9;i++){
		printf("%d  ",a[i]);
	}
	return 0;
}
