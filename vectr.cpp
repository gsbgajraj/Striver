#include<iostream>
#include <vector>
using namespace std;

void explainVector(){
  vector <int> v;
  v.push_back(1);
  v.emplace_back(2);
  cout<<v[0];
}
int main(){
    explainVector();
    return 0;
}
