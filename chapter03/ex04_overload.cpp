#include <iostream>
using namespace std;

int square(int i){
    cout << "square(int) 호출" << endl;
    return i*i;
}

double square(double i)    //overload, 함수의 이름은 동일하지만 인자가 다르면 다른함수로 인식
{
    cout << "square(double)호출" <<endl;
    return i*i;
}

int main(int argc, char const *argv[])
{
    cout << square(10) << endl;
    cout << square(2.0) << endl;
    return 0;
}