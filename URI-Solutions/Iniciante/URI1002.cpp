#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double PI, Radius, Area;
    PI = 3.14159;
    cin >> Radius;
    
    Area = PI * Radius * Radius;
    cout << fixed << setprecision(4);
    cout << "A=" << Area;
    return 0;
}
