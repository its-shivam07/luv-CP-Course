// This is a live demo! Click anywhere to edit.

#include <bits/stdc++.h>
using namespace std;

int main() {
   stack <int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   while (!s.empty()) {
      cout << s.top() << " ";
      s.pop();
   }
}

//-----------------***--------

// This is a live demo! Click anywhere to edit.

#include <bits/stdc++.h>
using namespace std;

int main() {
   queue<int> q;
   q.push("abc");
   q.push("def");
   q.push("ghi");
   
   
   while (!q.empty()) {
      cout << q.front() << endl;
      q.pop();
   }
}
