#include<iostream>
#include <vector>
using namespace std;

void explainVector(){
  vector <int> v1(3,100);
  vector<int> v2(v1);
  // vector <int> :: iterator it = v2.begin();
  // it++;
  // cout<<*(it);
  for(int i=0;i<v2.size();i++)
  {
    cout<<v2[i]<<" ";
  }
  }
int main(){
    explainVector();
    return 0;
}
