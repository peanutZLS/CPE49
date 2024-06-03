#include <iostream>
using namespace std;
int main(){
	char c;
	bool flag;
	while(cin.get(c)){
		if(c!='"'){
			cout << c;
		}
		else if(flag){
			cout << "``";
			flag = !flag;
		}
		else{
			cout << "''";
			flag = !flag;
		}
	}
}