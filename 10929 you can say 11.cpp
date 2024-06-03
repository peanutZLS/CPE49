#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[10000]={0};
	int i,j;
	while(cin>>a){
		if(strcmp(a,"0")==0){break;}
		int ans=0,sum=0;
		for(i=0;a[i]!=0;i++){
			if(i%2==0){
				sum = sum +(a[i]-'0');
			}else{
				sum = sum -(a[i]-'0');
			}
		}
		if( sum % 11 == 0){cout << a <<" is a multiple of 11."<<endl;}
		else{cout <<  a <<" is not a multiple of 11."<<endl;}
	}
}