#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() {
    string origin, now;
    getline(cin, origin);
    getline(cin, now);
    unordered_set<char> nowkey;  
    unordered_set<char> printed; 

    for (char ch : now) {
        nowkey.insert(toupper(ch));
    }
    
    for (int i = 0; i < origin.size(); i++) {
        if (i >= now.size() || origin[i] != now[i]) { 
            char upper = toupper(origin[i]);
            if (!nowkey.count(upper) && !printed.count(upper)) {
                cout << upper;
                printed.insert(upper); 
            }
        }
    }
    return 0;
}
