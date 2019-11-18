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
	int k,l;
	int b[m];
    while(k<1||k>n){
	cout<<"nhap k: ";cin>>k;
   }
    while(l<1 || l>n){
	cout<<"nhap l: ";cin>>l;}
    	for(int j=0;j<m;j++){
    		
    			b[j]=a[l-1][j];
    			a[l-1][j]=a[k-1][j];
    			a[k-1][j]=b[j];
			}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<""<<a[i][j]<<"\t";
		}cout<<"\n";
	}
	return 0;
}
