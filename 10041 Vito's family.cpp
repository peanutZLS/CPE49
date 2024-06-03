#include <bits/stdc++.h>
using namespace std;
int main(){
	int times = -1;
	int nn=0,n=0;
	int arr[500];
	cin >> times;
	while(times --){
		cin>>nn;
		while(nn--){
			cin >>arr[n];
			n++;
		}
		sort(arr,arr+n);
		int all=0;
		int middle = n/2;
		for(int i=0;i<n;i++){
			all += abs(arr[i]-arr[middle]);
		}cout<< all << endl;
		n=0,nn=0;
	}
}
