#include<iostream>
using namespace std;
int main(){
	int n;
	float v,s=1;
	cout<<"nhap n: ";
	cin>>n;
	float a[n];
	for(int i=0;i<n;i++){
		cout<<"nhap so thu "<<i+1<<": ";
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			v=v+a[i];
		}else if(a[i]<0){
			s=s*a[i];
		}
		}
		cout<<v;
		cout<<"\n";
		cout<<s;
		return 0;
	}
