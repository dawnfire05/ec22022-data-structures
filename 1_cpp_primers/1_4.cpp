// 추정 정답 : "abcdabc"
// 실제 정답 : "abcabcdabc"
// 이유 : abc 에 abc가 추가된 이후에 t[1] 이어서 s가 나오기 때문.
// 궁금한 점 : side effect가 언제 생기길래 뒤에 찍히는 s가 그냥 abc일까?
// 이것을 이해하려면 먼저 연산자의 우선순위를 이해해야 한다.
// 이 경우에서는 배열 연산자 [1]이 가장 먼저 수행된다.
// 그 다음으로는 + 연산자가 수행된다.
// 마지막으로는 += 연산자가 수행된다.
// 그리고 side effect에 대해서 이해해야 한다. 연산자 중에서 +=에서만 side effect가 발생한다.
// s + t[1] + s 를 먼저 수행하면 abcdabc가 된다. 이때는 s의 값이 변하지 않는다.
// 이제 마지막으로 +=으로 s에 abcdabc를 더할 때 side effect가 발생하기 때문에 결과값은
// "abcabcdabc"가 되는 것이다.

#include <iostream>

using namespace std;

int main ()
{
  string s = "abc";
  string t = "cde";
  s += s + t[1] + s;

  cout << s << endl;
  return 0;
}
