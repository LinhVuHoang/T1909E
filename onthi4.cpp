#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int m,n,l;
	float s;
	cout<<"nhap m: ";cin>>m;
	cout<<"nhap n: ";cin>>n;
	if(n==m){
		cout<<1;
	}cout<<"\n";
	if(n==1){
		cout<<m;
	}
	cout<<"\n";
	l=n-m;
	for(int i=n-1;i>0;i--){
		n=n*i;
	}
	cout<<n;
	cout<<"\n";
	for(int i=m-1;i>0;i--){
		m=m*i;
	} cout<<m;
	cout<<"\n";
	for(int i=l-1;i>0;i--){
		l=l*i;
	}cout<<l;
	cout<<"\n";
	if(n>m){
		s=n/(m*l);
		cout<<s;
	}
	return 0;
}
