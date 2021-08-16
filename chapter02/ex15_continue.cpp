#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<5; i++)
    {
        cout << "countine 문장 전에 있는 문장" << endl;
        continue;
        cout << "continue 문장 이후에 있는 문장" << endl; //확인용으로 배치해둔 코드이므로 이게 나오는게 이상한거 
    }

    return 0;
}