#include<iostream>
using namespace std;
int main(){
	int n,N;
	cout<<"nhap n: ";cin>>n;
	cout<<"\n";
	cout<<"nhap N: ";cin>>N;
	cout<<"\n";
	int a[100];
	int s=1;
	for(int i=0;i<n;i++){
		cout<<"nhap a["<<i<<"]: ";
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]<N){
			if(a[i]%2!=0){
			s=s*a[i];
		}
		}
	}
	cout<<s;
	
	return 0;
}
