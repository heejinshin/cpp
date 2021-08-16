#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    cout << "x값을 입력하세요";
    cin >> x;

    cout << "y값을 입력하세요";
    cin >> y;

    if(x > y)         //한줄짜리이기 때문에 중괄호를 안써도 무방하나 가급적 써주는 것이 좋다. 
        cout << "x가 y보다 큽니다." <<endl;
    else if(x < y)      //else와 if사이 공백 존재 
    
        cout << "x가  y보다 작습니다." << endl;
    else
        cout << "x와 y는 같다" <<endl;
    return 0;
}