#include <iostream>
#include <string>
using namespace std;

int main() {
    char name[100];// �̸��� �Է¹��� �ӽ� ���� �迭
    int maxLength = 0;// ���� �� �̸��� ���̸� ������ ����
    string maxName;// ���� �� �̸��� ������ ����

    cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";

    // 5���� �̸��� ';' ������ �Է¹ޱ� ���� �ݺ���
    for (int i = 0; i < 5; i++) {
        cin.getline(name, 100, ';');  // ';' ������ ���ڿ� �Է¹ޱ�
        cout << (i + 1) << " : " << name << "\n";  // �Էµ� �̸� ���

        // �Էµ� �̸��� ���ݱ��� ���� �� �̸����� Ȯ��
        if (strlen(name) > maxLength) {
            maxName = name;// ���� �� �̸� ����
            maxLength = strlen(name); // ���� ����
        }
    }

    // ���������� ���� �� �̸� ���
    cout << "���� �� �̸��� " << maxName;
}


