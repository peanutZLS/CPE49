#include <iostream>
using namespace std;

int dToB(int value){
	int numberOfOne = 0;
	while(value > 0){
		if(value % 2 == 1){
			numberOfOne++;
		}
		value= value /2;
	}return numberOfOne;
}

int hToB(int value){
	int numberOfOne = 0;
	while(value > 0){
		int right = value %10;
		numberOfOne = numberOfOne+dToB(right);
		value = value /10;
	}
	return numberOfOne;
}

int main(){
	int N=0;
	int value = 0;
	cin >> N;
	while(N--){
		cin >> value;
		cout << dToB(value) << " "<< hToB(value) << endl; 
	}
	return 0;
}