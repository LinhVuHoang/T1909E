#include<stdio.h>
#include<iostream>
int main(){
	int x=10;
	int *p;
	printf("x=%d\n",x);
	printf("dia chi cua x: \n");
	std::cout<< &x;
	p= &x;
	printf("\n p= \n");
	std::cout<<p;
	printf("gia tri cua o dia chi do: %d\n",*p);
	x+=5;
	printf(" x sau khi tang \n");
	(*p)+=5;
	printf("sau khi dung p de tang: %d\n");
	return 0;
}
