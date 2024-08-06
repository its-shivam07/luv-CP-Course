#include <iostream>
using namespace std;

int main() { 
  pair <int,string> p;
  //p =make_pair(2,"abc");
  p={2,"abcd"};
  pair <int,string> &p1=p;
  p1.first=3;
  cout << p.first << " " << p.second << endl;
  int a[]={1,2,3};
  int b[]={2,3,4};
  pair<int,int>p_array[3];
  p_array[0]={1,2};
  p_array[1]={2,3};
  p_array[2]={3,4};
  swap(p_array[0],p_array[2]);
  for(int i =0;i<3;i++){
    cout << p_array[i].first << " " <<p_array[i].second << endl;
  }
}


// ----------------------------------------


#include <bits/stdc++.h>
using namespace std;

void printvec(vector< string > &v) {
  cout << "size:" << v.size() << endl;
  for (int i = 0; i < v.size(); i++) {
    // v.size() ->0(1)
    cout << v[i] << " ";
  }
  //v.push_back(2);
  cout << endl;
}

int main() {

  // // input string 
  vector < string > v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {    
    string s;
    cin >> s;
    v.push_back(s);
  }
  printvec(v);

  // // declaration
  // vector<int> v(10, 3); // size 10, all elements are 3
  // v.push_back(5);
  // printvec(v);
  // v.pop_back(); 
  // printvec(v); //0(1))

  
  // // direct make copy of vector 
  // vector <int> v;
  // v.push_back(7);
  // v.push_back(6);
  
  // vector <int> v2 =v ; //o(n) like for loop so use refrence &v2 to avoid copying
  // v2.push_back(5);
  // printvec(v);
  // printvec(v2);

  // // VECTOR IS DYNAMIC SIZED ARRAY
  // vector<int> v;
  // int n;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //   int x;
  //   cin>>x;
  //   v.push_back(x);

  // }
  // printvec(v);
}
