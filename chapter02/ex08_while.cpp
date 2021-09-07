//7번파일에서 br생략하여 연습
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;

    cout << "숫자를 입력하세요";
    cin >> number;


    switch (number)
    {
        case 0 /* constant-expression */:
        /* code */
            cout << "zero\n";
            // break;   //파이썬에서와 동일함
        case 1:
            cout << "one\n";
            break;
        case 2:
            cout << "two\n";
            // break;
        default:
            cout << "many\n";
            break;
    }
}