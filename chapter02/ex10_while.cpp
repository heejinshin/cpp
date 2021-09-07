#include <iostream> 
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    int i = 1;

    cout << "구구단 중에서 출력하고 싶은 단을 입력하세요: ";
    cin >> n;

    while(i<=9)
    {
        cout << n << "*" << i
            << "=" << n*i << endl;
        i++;       //단독으로 쓰이는 것이기 때문에 앞에붙던 뒤에붙던 무관하다.
    }
    return 0;
}