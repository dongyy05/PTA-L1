#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp;  

    unordered_map<int, int> countMap;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        countMap[temp]++;
    }

    int b;
    cin >> b;

    for (int i = 0; i < b; ++i) {
        cin >> temp;
        if (i == 0) {
            cout << countMap[temp];
        } else {
            cout << " " << countMap[temp];
        }
    }
    cout << endl;
    return 0;
}
