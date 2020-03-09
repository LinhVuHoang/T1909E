#include<iostream>
using namespace std;
int main(){
	int n,j,k;
	cout<<"nhap n: ";
	cin>>n;
	while(n<0 || n>25){
		cout<<"Nhap n: ";
		cin>>n;
	}
	for(int i=n;i>1;i--){
		cout<<endl;
		cout<<"*";
		for(k=i-1;k<n-2;k++){
	    cout<<" ";
		}
		if(i<n){
			cout<<"*";}
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"*";
	}
	return 0;
}

