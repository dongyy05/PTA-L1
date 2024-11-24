#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        int temp_s = s;
        int num = 0;
        while (temp_s) {
            temp_s /= 10;
            num++;
        }
        bool found = false;
        for (int j = 1; j <= 10; j++) {
            string sum = to_string(s * s * j);
            string sp = sum.substr(sum.length() - num);
            string t = to_string(s);

            if (sp == t) {
                cout << j << " " << sum << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "No" << endl;
        }
    }
    return 0;
}
