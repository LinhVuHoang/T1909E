#include<stdio.h>
int binhphuongtong(int a,int b){
	int x=a+b;
	x=x*x;
	return x;
}
int binhphuong(int x){
	return x*x;
}
int songaunhien(){
	return 10;
}
void inramenu(){
	printf("tinh binh phuong 20=%d\n",binhphuong(20));
	printf("1 ca\n");
	printf("2 tom\n");
	printf("3 ga\n");
}
int main(){
	int a=10,b=20;
	//day la noi su dung
	int z= binhphuongtong(a,b);
	printf("z=%d ",z);
	printf("tong 2 = %d\n",binhphuongtong(15,22));
	inramenu();
	return 0;
}
