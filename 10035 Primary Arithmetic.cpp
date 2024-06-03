#include<bits/stdc++.h>
using namespace std;
int main(){
 	long int a=0,b=0;
 	while(cin >> a >> b){
 		if(a==0&&b==0){break;}
 	
 	int count=0,c=0;
 	while(a!=0||b!=0){
 		c = a%10+b%10+c;
 		c/=10;
 		a/=10;
 		b/=10;
 		if(c!=0){
 			count ++;
 		}
 	}if(count ==0){cout << "No carry operation."<<endl;}
 	else if (count ==1){cout << "1 carry operation."<<endl;}
 	else{cout<<count<<" carry operations."<<endl;}
	}return 0;
}