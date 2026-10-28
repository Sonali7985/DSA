// #include<bits/stdc++.h>
// using namespace std;    
// int fib(int n) {
//     if (n == 1) {
//         return 0;
//     }
//     if (n == 2) {
//         return 1;
//     }
//     return fib(n - 1) + fib(n - 2);
// }
// int main() {
    
    
//     for (int i = 0; i < 100; i++) {
//         cout << fib(i) << " ";
//     }
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int fib(int n,vector<int>&data){


    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (data[n] == 0) {
        data[n] = fib(n - 1,data) + fib(n - 2,data);
    }
    return data[n];
}
int main(){
    vector<int>data(100, 0);    
    for (int i = 0; i < 100; i++) {
        cout <<i<<" : "<<fib(i,data) << " "<<endl;
    }
    return 0;
}