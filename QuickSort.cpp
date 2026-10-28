
// #include <bits/stdc++.h>

// using namespace std;

// int Partition(vector<int>& A, int low, int high)
// {
//     int i = low;
//     int j = high + 1;
//     int pivot = A[low];

//     do
//     {
//         do
//         {
//             i++;
//         }
//         while (A[i] < pivot);

//         do
//         {
//             j--;
//         }
//         while (A[j] > pivot);

//         if (i < j)
//         {
//             swap(A[i], A[j]);
//         }

//     }
//     while (i < j);

//     swap(A[low], A[j]);

//     return j;
// }

// void QuickSort(vector<int>& a, int low, int high)
// {
//     if (low < high)
//     {
//         int j = Partition(a, low, high);

//         QuickSort(a, low, j - 1);
//         QuickSort(a, j + 1, high);
//     }
// }

// int main()
// {
//     vector<int> arr;

//     arr.push_back(10);
//     arr.push_back(50);
//     arr.push_back(5);
//     arr.push_back(-5);
//     arr.push_back(52);
//     arr.push_back(84);
//     arr.push_back(INT_MAX);
//     arr.pop_back();
//     QuickSort(arr, 0, 6);

//     for (auto i : arr)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int Partition(vector<int>&A,int low,int high){
//     int i=low;
//     int j=high+1;
//     int pivot=A[low];
//     do{
//         do{
//             i++;
//         }while(A[i]<pivot);
//         do{
//             j--;
//         }while(A[j]>pivot);

//             if(i<j){
//                 swap(A[i],A[j]);
//             }
//     }while(i<j);
//     swap(A[low],A[j]);
//     return j;
    
// }
// void QuickSort(vector<int>&A, int low, int high){
//     if(low<high){
//        int j=Partition(A,low,high);
//         QuickSort(A,low,j-1);
//         QuickSort(A,j+1,high);
//     }
// }

// int main(){
//     vector<int>Arr;
//     Arr.push_back(50);
//      Arr.push_back(10);
//       Arr.push_back(500);
//       Arr.push_back(200);
//       Arr.push_back(5);
//       Arr.push_back(20);
//        Arr.push_back(100);
//        Arr.push_back(40);

//       Arr.push_back(INT_MAX);
//     QuickSort(Arr,0,7);
//     Arr.pop_back();
//     for(auto i:Arr){
//          cout<<i<<" ";
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int Randomized(vector<int>&A,int low,int high){
    int i=low;
    int j=high+1;
    int pivot=A[low];
    do{
        do{
            i++;
        }while(A[i]<pivot);
        do{
            j--;
        }while(A[j]>pivot);

            if(i<j){
                swap(A[i],A[j]);
            }
    }while(i<j);
    swap(A[low],A[j]);
    return j;
    
}
void QuickSort(vector<int>&A, int low, int high){
    if(low<high){
       int j=Partition(A,low,high);
        QuickSort(A,low,j-1);
        QuickSort(A,j+1,high);
    }
}

int main(){
    vector<int>Arr;
    Arr.push_back(50);
     Arr.push_back(10);
      Arr.push_back(500);
      Arr.push_back(200);
      Arr.push_back(5);
      Arr.push_back(20);
       Arr.push_back(100);
       Arr.push_back(40);

      Arr.push_back(INT_MAX);
    QuickSort(Arr,0,7);
    Arr.pop_back();
    for(auto i:Arr){
         cout<<i<<" ";
    }
}