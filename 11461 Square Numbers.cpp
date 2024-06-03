#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b;
	while(cin >> a >> b){
		if(a==0 && b == 0){break;}
		cout << int(sqrt(b))-int(sqrt(a-1))<<endl;
	}
}