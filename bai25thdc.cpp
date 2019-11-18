//HOANG VU LINH
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"nhap so hang: ";cin>>n;
	cout<<"nhap so cot: ";cin>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"nhap a("<<i+1<<","<<j+1<<"): ";
			cin>>a[i][j];
		}}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<""<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	int l,k;
	int b[m];
    while(k<1||k>n){
	cout<<"nhap k: ";cin>>k;
   }
	cout<<"nhap l: ";cin>>l;
	if(l>=0&&l<n){
    	for(int j=0;j<m;j++){
    		
    			b[j]=a[l][j];
    			a[l][j]=a[k][j];
    			a[k][j]=b[j];
			}}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<""<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
