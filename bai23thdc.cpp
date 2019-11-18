//HOANG VU LINH =))
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap n: ";cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		    cout<<"nhap a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	int max=a[0][1];
	int min=a[1][n];
	int tong;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				if(a[i][j]>max){
					max=a[i][j];
				}
			}else if(i>j){
				if(a[i][j]<min){
					min=a[i][j];
				}
			}else if(i==j){
				tong=tong+a[i][j];
			}
		}
	}
	cout<<"max= "<<max<<"\n";
	cout<<"min= "<<min<<"\n";
	cout<<"tong= "<<tong<<"\n";
	return 0;
}
