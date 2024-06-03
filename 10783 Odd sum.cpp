#include <iostream>
using namespace std;
int main(){
	int i,j,g; 
	int cot=0,ans=0;
	int x,y;
	cin >> i;
	for(g=0;g<i;g++)
	{
		cin >> x >> y;
		for(j=x;j<=y;j++)
		{
			if(j%2==1){ans=ans+j;}
		}cout <<"Case "<< g+1 << ": "<< ans <<endl;
		ans = 0;
	}	
}