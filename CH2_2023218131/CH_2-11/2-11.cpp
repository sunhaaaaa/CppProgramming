#include <iostream>//printf, scanf ��� cin, cout�� ���� ���� <iostream>�� ���
using namespace std;

int main() {
    int k, n = 0, sum = 0; // k: �ݺ��� ����, n: �Է°�, sum: �հ� ���� ����

    //���� ������(%d) ��� ��Ʈ�� ������(<<, >>)�� ���
    cout << "�� ���� �Է��ϼ���>>";// �Է� �ȳ��� ���
    cin >> n;// ����ڷκ��� �� �� �Է¹ޱ�

    // 1���� n������ �� ���ϱ�
    for (k = 1; k <= n; k++) {
        sum += k;// sum = sum + k
    }

    // ��� ���
    cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.";
    return 0;
}


