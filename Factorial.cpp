//Question - 7. (Print the factorials of first ‘n’ numbers).

#include <iostream>
using namespace std;
int main( ) {
int n;
cout<<"Enter Integer : ";
cin >> n;
int f = 1;
for (int i = 1; i <= n; i++) {
f *= i;
cout << f << endl;
}
}