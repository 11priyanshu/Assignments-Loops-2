//Question - 9. (Write a program to print out all Armstrong numbers between 1 and 500).

#include <iostream>
using namespace std;
int main( ) {
for (int i = 1; i <= 500; i++) {
int x = 0, temp = i;
while (temp > 0) {
int m = temp % 10;
x += m * m * m;
temp /= 10;
}
if (i == x) {
cout << i << endl;
}
}
}