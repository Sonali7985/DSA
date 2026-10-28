#include<bits/stdc++.h>
using namespace std;
void ArrayInsertion(vector<int>arr, int i, int data){
    int N = arr.size();

}
int ArrayDeletion(vector<int>&arr,int i){
    int temp = arr[i];
    int N = arr.size();
    for(int j=i+1;j<N;j++){
        arr[j-1] = arr[j];
    }
    arr.pop_back();
    return temp;
}
void EnQueue(vector<int>&arr,int data){
    int i=0;
    int N=arr.size();
    while(i<N && arr[i]<data){
        i++;
    }
    ArrayInsertion(PQ,i,data);
}
}
int DeQueue(vector<int>&arr){
    int x = arr[0];
    ArrayDeletion(arr,0);
    return x;
}
int main(){
    PQ=vector<int>PQ;
}