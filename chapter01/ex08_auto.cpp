#include <iostream>
#include <string>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main(int argc, char const *argv[]) { 
    double d = 1.0; // 값을 보고 double 타입이 됨 
    int sum = add(5, 10);
    cout << d << " " << sum << endl;
return 0; }
