#include<bits/stdc++.h>
using namespace std;
int main(){
    tuple<string,int,string>persons;
    string name;
    int age;
    string dept;
    cin>>get<0>(persons)>>get<1>(persons)>>get<2>(persons);
    cout<<get<0>(persons)<<" "<<get<1>(persons)<<" "<<get<2>(persons);
    return 0;
}