#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	float a[n];
	for(int i=0;i<n;i++){
		cout<<"nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
	int dem1=0,dem2=0,dem3=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			dem1++;
		}else if(a[i]<0){
			dem2++;
		}else if(a[i]==0){
			dem3++;
		}
	}
	cout<<"so phan tu duong la : "<<dem1<<"\n";
	cout<<"so phan tu am la : "<<dem2<<"\n";
	cout<<"so phan tu bang khong la : "<<dem3<<"";
	return 0;
}
