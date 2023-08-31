#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int strtoint(string& s, int index){
    if(index<0) return 0;
    int num = s[index] - '0';
    return num + 10*strtoint(s,index-1);
}

int main() {
    // Write C++ code here
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int n = s.size();
    int ans = strtoint(s, n-1);
    cout<<ans;
    return 0;
}
