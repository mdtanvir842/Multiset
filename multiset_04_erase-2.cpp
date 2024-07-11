#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>mt;
    mt.insert(5);
    mt.insert(105);
    mt.insert(55);
    mt.insert(5);
    mt.insert(6);
    mt.insert(2);
    mt.insert(2);
    auto it=mt.find(2);
    mt.erase(it);
    for(auto u:mt){
        cout<<u<<endl;
    }
}
