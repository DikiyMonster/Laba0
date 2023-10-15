//9. Palindrome Number
#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    // ���� ����� ������������� ��� ������������ �����, �� ��� �� �������� �����������
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversed = 0;
    int original = x;

    // �������������� �����
    while (x > 0) {
        int digit = x % 10;
        x /= 10;

        // ��������� �� ������������
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
            return false;
        }

        reversed = reversed * 10 + digit;
    }

    // ���������, ���� ������������ ����� ����� ���������
    return reversed == original;
}

int main() {
	
	setlocale(LC_ALL, "Russian");
	
    int x = 121;

    if (isPalindrome(x)) {
        cout << x << " - ��� ���������." << endl;
    } else {
        cout << x << " - �� ���������." << endl;
    }

    return 0;
}
