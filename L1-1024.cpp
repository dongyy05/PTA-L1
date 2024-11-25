#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;

    // 分割底数和指数
    auto pos = num.find('E');
    string base = num.substr(0, pos);    // 底数部分
    int exponent = stoi(num.substr(pos + 1)); // 指数部分

    // 去掉底数的符号
    char sign = base[0];
    base = base.substr(1);

    // 分割整数部分和小数部分
    auto dotPos = base.find('.');
    string integerPart = base.substr(0, dotPos);
    string decimalPart = base.substr(dotPos + 1);

    // 构造输出
    string result;
    if (exponent >= 0) {
        // 正指数：小数点右移
        if (exponent < decimalPart.size()) {
            result = integerPart + decimalPart.substr(0, exponent) + "." + decimalPart.substr(exponent);
        } else {
            result = integerPart + decimalPart + string(exponent - decimalPart.size(), '0');
        }
    } else {
        // 负指数：小数点左移
        int absExp = -exponent;
        if (absExp < integerPart.size()) {
            result = integerPart.substr(0, integerPart.size() - absExp) + "." + integerPart.substr(integerPart.size() - absExp) + decimalPart;
        } else {
            result = "0." + string(absExp - integerPart.size(), '0') + integerPart + decimalPart;
        }
    }

    // 输出结果，加上符号
    if (sign == '-') {
        result = "-" + result;
    }
    cout << result << endl;

    return 0;
}
