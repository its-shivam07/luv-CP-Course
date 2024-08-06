#include <iostream>
#include <vector>
using namespace std;

void printvec(vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> v(N); // Vector of vectors

    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;

        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            v[i].push_back(x); // Correct usage of push_back
        }
    }

    for (int i = 0; i < N; ++i) {
        printvec(v[i]); // Print each vector in the vector of vectors
    }

    return 0;
}


//--------------------------------------------------


#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int, int>> &v) {
  cout << "size: " << v.size() << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }
  cout << endl;
}

int main() {
   // vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
  // printvec(v);
  // return 0;

// how to make pair in vector.
  vector<pair<int, int>> v;
  printvec(v);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    v.push_back({x, y});
    //v.push_back(make_pair(x,y));
  }
  printvec(v);
}
