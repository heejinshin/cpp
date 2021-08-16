#include <iostream>
using namespace std;

int main(int argc, char const *argb[])
{
    int x = 100;

    if(x == 100)
    {
        cout << "x가 100입니다." << endl;
    }
    
    if(x == 100)
    {               //중괄호가 반드시 있어야 함을 보여주기 위한 코드로 한번 더썼음
        cout << "x의 값을 출력합니다." << endl;
        cout << "x가 100입니다." << endl;
    }

    return 0;
}