#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int x1, y1, x2, y2;
	int i = 1;
	cin >> n;	
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
		
    	int count = (x1+y1+x2+y2+1)*(x2+y2-x1-y1)/2 +(x2-x1); 		 
		cout << "Case " << i++ << ": " << count << endl; 
		
	}
    return 0;
}