#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while( cin >> n ) {
		//cout <<"n:"<< n << endl;
		int pre , now ;
		int d[n] ; //initial value not guaranteed to be zero
		for ( int i = 0; i< n ; i++ ){ // init to zero
			d[i] = 0 ; 
		}
		cin >> pre;
		
		for(int i = 1 ; i < n ; i++){
			cin >> now ;
			//cout<<"pre:" << pre << endl;
			//cout<<"now:" << now << endl;
			d [ abs ( now - pre ) ] ++ ;
			//cout<<"d[i]:" << d[0] << endl;
			//cout<<"d[i]:" << d[1] << endl;
			//cout<<"d[i]:" << d[2] << endl;
			//cout<<"d[i]:" << d[3] << endl;
			pre = now ; 
		}
		bool flag = true ;
		for(int i = 1 ; i < n; i++){
			if(d[i]!=1){
				flag = false;
				break;
			}
		}
		if(flag==true) cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
	return 0;
}