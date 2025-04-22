// 두 함수의 차이는 무엇인가??
// f는 call by value고, g는 call by reference이다.
// 따라서 함수 f에서의 x는 side effect가 존재하지 않는다.
// 반면 g에서의 x는 x가 정의된 메모리 영역을 가리킨다. 따라서 ++연산자에 의해 side effect가 발생한 후에 x가 출력되기 때문에 x+1의 값이 출력된다.

#include <iosteam>

using namespace std;

int main() {
  
