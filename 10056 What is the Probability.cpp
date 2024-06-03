#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
    int S = 0;
    int N = 0;
    int K = 0;
    double p = 0.0;
    
    cin >> S;
    
    while (S--){
        cin >> N >> p >> K;
        if (p == 0) {
            cout << "0.0000\n";
            continue;
        }
        double first = pow(1.0 - p, K - 1) * p;
        double r = pow(1.0 - p, N);
        cout << fixed << setprecision(4) << first / (1.0 - r) << "\n";
    }
    return 0;
}
