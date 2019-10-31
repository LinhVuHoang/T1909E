#include<stdio.h>
int songhichdao(int n){
	int s;
	while(n!=0){
		s=s*10+n%10;
		n=n/10;
	}
	return s;
}
	// n la kich thuoc mang
	void inmangsonguyen(int ary[],int v){
		for(int i=0;i<v;i++){
			printf("%d\n",ary[i]);
		}
	}
	void inmangsonguyencach2(int *ary[]){
		for(int i=0;i<(sizeof(ary)/sizeof(int));i++){
			printf("%d\n",ary[i]);
		}
	}
int main(){
	int ary[5]={3,1,5,6,2};
	inmangsonguyen(ary,5);
	int n;
	printf("nhap n : ");
	scanf("%d",&n);
	//day la noi su dung
	int z=songhichdao(n);
	printf("so nghich dao la : %d ",z);
	int y=songhichdao(29102001);
	printf("so nghich dao la : %d ",y);
	printf("so nghich dao  14092001 la : %d ",songhichdao(14092001));
	return 0;
}
