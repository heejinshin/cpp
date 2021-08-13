#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    const double TAX_RATE = 0.25; //기호 상수선언, 이 후에 수정하면 에러 발생
    int income = 1000;
    // TAX_RATE  =0.3; --에러
    income = income - TAX_RATE * income;
    cout << income << endl;
    return 0;
}