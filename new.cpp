#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double num1, num2, num3;
    cout << "������";
    cin >> num1 >> num2 >> num3;

    double maxNum = max(max(num1, num2), num3);
    double minNum = min(min(num1, num2), num3);
    double avgNum = (num1 + num2 + num3) / 3;

    cout << "���ֵ" << maxNum << "\n";
    cout << "��Сֵ" << minNum << "\n";
    cout << "ƽ��ֵ" << avgNum << "\n";

    return 0;
}