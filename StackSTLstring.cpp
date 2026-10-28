#include<bits/stdc++.h>
using namespace std; 
int main(){
    stack<int>s;
    int n;
    cin>>n;
    while(n!=0){
        int r=n%2;
        s.push(r);
        n=n/2;
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}