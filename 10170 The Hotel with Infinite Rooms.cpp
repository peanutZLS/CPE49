#include <iostream>
using namespace std;

int main(){
	long long S = 0;
	long long D = 0;
	while (cin >> S >> D){
		while( D > 0 ){
			D = D - S;
			S++;
		}
		cout << S - 1 << endl;
	}
	return 0;
	
}
