#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address, age;// 이름, 주소, 나이를 저장할 문자열 변수

    cout << "이름은?";// 이름 입력 안내
    getline(cin, name);// 이름 입력받기

    cout << "주소는?";// 주소 입력 안내
    getline(cin, address);// 주소 입력받기

    cout << "나이는?";// 나이 입력 안내
    cin >> age;// 나이 입력받기

    // 입력된 정보를 문제의 형식으로 출력
    cout << name << ", " << address << ", " << age << "세" << endl;
}

