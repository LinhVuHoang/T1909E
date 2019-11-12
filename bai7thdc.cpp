#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	float a[n];
	for(int i=0;i<n;i++){
		cout<<"nhap phan tu thu "<<i+1<<":";
		cin>>a[i];
	}
	int max=a[0],min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<"gia tri lon nhat la:"<<max<<"\n";
	cout<<"gia tri nho nhat la:"<<min<<"\n";
	return 0;
}
