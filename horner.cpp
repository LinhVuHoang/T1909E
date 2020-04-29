#include<iostream>
using namespace std;
int main(){
	int n,b,k=-1;
	int a[10];
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap b: ";
	cin>>b;
	for(;n!=0;){
		k++;
			a[k]=n%b;
			n=n/b;
	}
	for(int i=k;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}
