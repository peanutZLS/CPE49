#include <iostream>
using namespace std;

int main(){
	int fibonaccimal[39];
	int N,value;
	
	fibonaccimal[0] = 1;
	fibonaccimal[1] = 2;
	
	for(int i = 2; i < 39; i++){
		fibonaccimal[i] = fibonaccimal[i-1] + fibonaccimal[i-2];
	}
	
	cin>>N; 
	
	while(N--) {
		cin >> value; 
		cout << value << " = ";
		
		bool flag=false;
		
		for(int i = 38; i >= 0; i--) {				  
			if(value >= fibonaccimal[i])	{
				cout << "1";
				value = value - fibonaccimal[i];
				flag = true; 
			}
			else if(flag){
				cout << "0";
			}
		}
		cout << " (fib)" << endl;
	}
	return 0;
}