#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cout << " string is  " << s  << " " << ++m[s] << endl;
    }
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << m[s] << endl;
   }
  
    return 0;
}
