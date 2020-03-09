#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a[100][100];
	int n,s,dem=0;
	float v;
	cout<<"nhap n: ";cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"nhap ["<<i+1<<","<<j+1<<"]: ";
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
			cout<<setw(3);
		} cout<<"\n";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				s=s+a[i][j];
			}}}
	v=(float)s/n;
	cout<<"gia tri tb cua dct la :"<<v<<"";
	cout<<"\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<v){
				dem++;
			}
		}
	}
	cout<<"co "<<dem<<" gia tri nho hon gia tri trung binh cua dct";
	return 0;
}
