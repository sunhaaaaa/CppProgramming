#include <iostream>
#include <string>
using namespace std;

int main() {
    char name[100];// 이름을 입력받을 임시 문자 배열
    int maxLength = 0;// 가장 긴 이름의 길이를 저장할 변수
    string maxName;// 가장 긴 이름을 저장할 변수

    cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n>>";

    // 5개의 이름을 ';' 단위로 입력받기 위한 반복문
    for (int i = 0; i < 5; i++) {
        cin.getline(name, 100, ';');  // ';' 전까지 문자열 입력받기
        cout << (i + 1) << " : " << name << "\n";  // 입력된 이름 출력

        // 입력된 이름이 지금까지 가장 긴 이름인지 확인
        if (strlen(name) > maxLength) {
            maxName = name;// 가장 긴 이름 갱신
            maxLength = strlen(name); // 길이 갱신
        }
    }

    // 최종적으로 가장 긴 이름 출력
    cout << "가장 긴 이름은 " << maxName;
}


