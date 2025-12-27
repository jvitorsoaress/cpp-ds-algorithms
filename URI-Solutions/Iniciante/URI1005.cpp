#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, P1, P2, AVERAGE;
    cin >> A;
    cin >> B;
    P1 = 3.5;
    P2 = 7.5;
    
    AVERAGE = (A * P1 + B * P2) / (P1 + P2);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << AVERAGE;
    return 0;
}
