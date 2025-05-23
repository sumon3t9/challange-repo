#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.141592653;
    double R;
    std::cin >> R;
    double area = PI * R * R;
    cout <<fixed << setprecision(9) << area << endl;
    return 0;
}

