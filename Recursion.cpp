// #include<bits/stdc++.h>
// using namespace std;
// // int power(int a, int n)
// // {
// //     if(n==0)
// //         return 1;
// //     else
// //         return a*power(a,n-1);
// // }
// // int Factorial(int n){
// //     if(n=0){
// //         return 1;
// //     }
// //     else{
// //         return n*Factorial(n-1);
// //     }
// // }
// // int gcd(int a,int b){
// //     if(a==b){
// //         return a;
// //     }
// //     else if(a>b){
// //         cout<<gcd(a-b,b);
// //     }
// //     else{
// //         cout<<gcd(a,b-a);
// // }
// // }
// // int SumOfDigits(int n){
// //     if(n==0){
// //         return 0;
// //     }
// //     else{
// //         return n%10+SumOfDigits(n/10);
// //     }
// // }
// // int SumOfArray(int arr[],int n){
// //     if(n==0){
// //         return 0;
// //     }
// //     else{
// //         return arr[n-1]+SumOfArray(arr,n-1);
// //     }
// // }
// // int n;
// int decimaltobinary(int n){
//     if(n==0){
//         return
//         decimaltobinary(n/2);
//  int invalue=n%2;
//  cout<<invalue<<endl;   
//     }
// }
// int binarytodecimal(int n){
    
// }
// int main()
// {
//     int n;
    
//     cout<<"enter the number"<<endl;
//      cin>>n;
    // int a,n;
    // cin>>a>>n;
    // cout<<power(a,n);

    // cout<<Factorial(n);
    // cout<<SumOfDigits(2345)<<endl;

//      cout<<decimaltobinary(n)<<endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// void PrintElement(vector<int>&arr,int i){
//     if(i<arr.size()){
//         cout<<arr[i]<<",";
//         PrintElement(arr,i+1);
//     }
// }
// int main(){
//     vector<int>arr;
//     arr.push_back(2);
//     arr.push_back(4);
//     arr.push_back(6);
//     arr.push_back(8);
//     arr.push_back(10);
//     PrintElement(arr,0);
// }
// #include<bits/stdc++.h>
// using namespace std;
// void PrintElement(vector<int>&arr,int i){
//     if(i<arr.size()){
//         int n=arr.size();
//         cout<<arr[n-i-1]<<",";
//         PrintElement(arr,i+1);
//     }
// }
// int main(){
//     vector<int>arr;
//     arr.push_back(2);
//     arr.push_back(4);
//     arr.push_back(6);
//     arr.push_back(8);
//     arr.push_back(10);
//     PrintElement(arr,0);
// }
// #include<bits/stdc++.h>
// using namespace std;
// void PrintElement(vector<int>&arr,int i){
//     if(i<arr.size()){
        
//         PrintElement(arr,i+1);
//         cout<<arr[i]<<",";
//     }
// }
// int main(){
//     vector<int>arr;
//     arr.push_back(2);
//     arr.push_back(4);
//     arr.push_back(6);
//     arr.push_back(8);
//     arr.push_back(10);
//     PrintElement(arr,0);
// }








#include<bits/stdc++.h>
using namespace std;
int  DecimalToBinary(int n){
    if(n>0){
     
        DecimalToBinary(n/2);
        cout<<n%2;
    }
}
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0;
    }
    else{
    DecimalToBinary(n);
    }
}