#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 100;
    x++; //x는 101
    cout << x << endl;      //101
    
    x--;
    cout << x << endl;      //100

    cout << ++x << endl;  //101
    cout << x++ << endl;   //101
    cout << x << endl;      //102
    cout << --x << endl;     //101
    cout << x-- << endl;     //101
    cout << x << endl;         //100
    return 0;
}