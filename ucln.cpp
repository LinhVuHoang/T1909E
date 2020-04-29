#include<iostream>
using namespace std;
int main(){
     int a,b,r;
	 cout<<"nhap a: ";
	 cin>>a;
	 cout<<"nhap b: ";
	 cin>>b;
	 while(b!=0){
	 	r=a%b;
	 	a=b;
	 	b=r;
	 }
	 cout<<"uoc chung lon nhat cua 2 so la :"<<a;
	 return 0;
}

		
