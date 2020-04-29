#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	float k=sqrt(n);
	cout<<"nhap n: ";
	cin>>n;
	for(int i=0;i<=k;i++){
		if(n%i==0){
			cout<<"day k phai la so nguyen to";
		}else{
			cout<<"day la so nguyen to";
		}
	} 
	return 0;
}

