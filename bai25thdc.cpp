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
			cout<<"nhap a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	int l,k;
	int s=1;
	int b[m];
	cout<<"nhap l: ";cin>>l;
	cout<<"nhap k: ";cin>>k;
	if(l<=k && k<n){
    	for(int j=0;j<m;j++){
    		
    			b[j]=a[l][j];
    			a[l][j]=a[k][j];
    			a[k][j]=b[j];
			}
	}
    for(int j=0;j<m;j++){
		cout<<"a["<<l<<"]["<<j<<"]:"<<a[l][j]<<"\t";
		}
		cout<<"\n";
	for(int j=0;j<m;j++){
		cout<<"a["<<k<<"]["<<j<<"]:"<<a[k][j]<<"\t";	
		}
	
	return 0;
}
