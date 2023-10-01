#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nge(vector<int>ip,int n){
  vector<int> op(n);
  stack<int> s;
  for(int i = n-1; i>=0; i--){
    while(!s.empty() && s.top()<=ip[i]){
      s.pop();
    }
    if(true){
      if(s.empty()==false){
        op[i]=s.top();
      }
      else op[i] = -1;
      s.push(a[i]);
  }
    return op;
}

int main(){
  int n;
  cin>>n;
  vector<int>ip(n);
  for(int i = 0; i<n; i++){
    cin>>ip[i];  
  }
  vector<int> op(n) = nge(ip, n);
  for(int i = 0; i<n; i++){
    cout<<op[i];  
  }
  return 0;
}
