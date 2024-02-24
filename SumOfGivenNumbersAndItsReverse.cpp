//Question - 6. (WAP to print the sum of a given number and its reverse).
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    int temp = n, x = 0;
    while (temp > 0) {
        x *= 10;
        x += (temp % 10);
        temp /= 10;
    }
    
    cout << "The sum of " << n << " and its reverse (" << x << ") is: " << n + x << endl;
    
    return 0;
}
