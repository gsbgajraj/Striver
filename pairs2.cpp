#include<iostream>
using namespace std;

void explainPair(){
    pair<int, pair<int,int>> p={1,{4,5}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
}
int main(){
    explainPair();
    return 0;
}