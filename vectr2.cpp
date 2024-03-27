#include<iostream>
#include <vector>
using namespace std;

void explainVector(){
  vector<pair<int,int >> v;
  v.push_back({1,2});
  v.emplace_back(3,4);
  cout<<v[0].first<<v[0].second;
  cout<<v[1].first<<v[1].second;
}
int main(){
    explainVector();
    return 0;
}
