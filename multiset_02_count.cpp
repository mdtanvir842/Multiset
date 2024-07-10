#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>mt;
    mt.insert(10);
    mt.insert(25);
    mt.insert(9);
    mt.insert(01);
    mt.insert(1);
    mt.insert(9);
    mt.insert(2);
    mt.insert(2);
    cout<<mt.count(2)<<endl;
    cout<<count(mt.begin(),mt.end(),2)<<endl;
}
