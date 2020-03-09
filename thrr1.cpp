#include<iostream>
using namespace std;
int main(){
int n;
cout<<"nhap n: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cout<<"nhap a["<<i+1<<"]: ";
	cin>>a[i];
}
int max=a[1];
for(int i=0;i<n;i++){
	if(max<a[i]){
		max=a[i];
	}
}
cout<<max;
return 0;
}
