// answer : d
// 이유 : $ 같은 특수부호는 변수명으로 사용할 수 없음.

#include <iostream>

using namespace std;

int main(){
    string _a = "Hello world";
    string i$ = "HI";
    cout << _a << endl << i$;

    return 0;
}
