#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address, age;// �̸�, �ּ�, ���̸� ������ ���ڿ� ����

    cout << "�̸���?";// �̸� �Է� �ȳ�
    getline(cin, name);// �̸� �Է¹ޱ�

    cout << "�ּҴ�?";// �ּ� �Է� �ȳ�
    getline(cin, address);// �ּ� �Է¹ޱ�

    cout << "���̴�?";// ���� �Է� �ȳ�
    cin >> age;// ���� �Է¹ޱ�

    // �Էµ� ������ ������ �������� ���
    cout << name << ", " << address << ", " << age << "��" << endl;
}

