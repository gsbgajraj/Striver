#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

void iteratorfn(){
    vector<int> v(5,100);
    v.erase(v.begin()+1,v.begin()+3);
    for(auto it:v){
        cout<<it<<" ";
    }
}

int main(){
    iteratorfn();
    return 0;
}