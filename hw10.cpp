#include <iostream>
using namespace std;

int main()
{
    int password = 7;
    int enterkey;
    std::cout<<"輸入密碼(1-10)";
    cin >> enterkey;
    while (password != enterkey) {
        cout << "密碼錯誤,再次輸入密碼(1-10)";
        cin >> enterkey;
     }
    cout << "恭喜你輸入正確";
    
}