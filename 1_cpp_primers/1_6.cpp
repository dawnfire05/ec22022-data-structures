
#include <iostream>

int main() {
    double* dp[10];  // 10개의 double* 배열

    // 각 포인터에 메모리 할당 및 초기화
    for (int i = 0; i < 10; i++) {
        dp[i] = new double(0.0);  // 동적 할당 후 초기화
    }

    // 값 출력 확인
    for (int i = 0; i < 10; i++) {
        std::cout << "dp[" << i << "] = " << *dp[i] << std::endl;
    }

    // 메모리 해제
    for (int i = 0; i < 10; i++) {
        delete dp[i];
    }

    return 0;
}
