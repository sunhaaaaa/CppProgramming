#include <iostream>//printf, scanf 대신 cin, cout을 쓰기 위해 <iostream>을 사용
using namespace std;

int main() {
    int k, n = 0, sum = 0; // k: 반복문 변수, n: 입력값, sum: 합계 저장 변수

    //서식 지정자(%d) 대신 스트림 연산자(<<, >>)를 사용
    cout << "끝 수를 입력하세요>>";// 입력 안내문 출력
    cin >> n;// 사용자로부터 끝 수 입력받기

    // 1부터 n까지의 합 구하기
    for (k = 1; k <= n; k++) {
        sum += k;// sum = sum + k
    }

    // 결과 출력
    cout << "1부터 " << n << "까지의 합은 " << sum << "입니다.";
    return 0;
}


