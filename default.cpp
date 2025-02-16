#include <iostream>
using namespace std;

void f(int a = 10) {
    int k;
    cout<<"Enter a number: ";
    cin >> k;
    cout << a << endl;
}

int main() {
      
    f();
    f(221);
  
    return 0;
}
