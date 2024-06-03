#include<bits/stdc++.h>
using namespace std ;
int main(){
	int times=0;
	int a,b;
	cin >> times;
	while(times --){
		cin >> a >> b;
		if (a<b){cout << "impossible"<<endl;}
		else if ((a-b)%2!=0 ){cout << "impossible"<<endl;}
		else{
			cout << (a+b)/2 << " "<< (a-b)/2 <<endl;
		}
	}
}
