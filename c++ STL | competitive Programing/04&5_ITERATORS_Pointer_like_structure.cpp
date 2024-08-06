#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v {1, 2, 3, 4, 5};
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << "  ";
  }
  cout << endl;

  // declare iterator
  vector<int>::iterator it;

  // use iterator with for loop
  for (it = v.begin(); it != v.end(); ++it) {
    cout << *it << "  ";
  }
  cout << endl;
  
  for (int &value : v) { // &value is used for refrence otherwise not
      value++;
    cout << value << "  ";
  }
  cout << endl;
  
  // vector pair 
  vector< pair <int, int> > v_p {{1, 2}, {3, 4}};
  for (pair<int, int> &value : v_p) {
    cout << value.first << "  " << value.second << endl;
  }
  cout << "auto help us to code less";
  for (auto &value : v_p) {
    cout << value.first << "  " << value.second << endl;
  }
  
  

  return 0;
}
