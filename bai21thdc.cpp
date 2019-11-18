//HOANG VU LINH =))
#include<iostream>
using namespace std;
int main(){
	int n,m;
	int b[n];
	cout<<"nhap so hang: ";cin>>n;
	cout<<"nhap so cot: ";cin>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"nhap a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	int s,h=0;
	for(int i=0;i<n;i++){
		b[i]=a[i][0];
		for(int j=0;j<m;j++){
			if(a[i][j]<b[i]){
				b[i]=a[i][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<"b["<<i<<"]="<<b[i]<<"\t";
	}
	return 0;
}
