// #include<bits/stdc++.h>
// using namespace std;
// void Traverse(vector<int>&C){
//     for(auto i:C)
//     cout<<i<<" ";
// }
// void MergeArray(vector<int>A,vector<int>B){
//     vector<int>C;
//     int m=A.size();
//     int n=B.size();
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(A[i]<B[j]){
//             C.push_back(A[i]);
//             i++;
//         }else{
//             C.push_back(B[j]);
//             j++;
//         }
//     }
//     while(i<m){
//         C.push_back(A[i]);
//         i++;
//     }
//     while(j<n){
//         C.push_back(B[j]);
//         j++;
//     }
    
//     Traverse(C);

// }
// int main(){
//    vector<int>A;
//    A.push_back(5);
//    A.push_back(10);
//    A.push_back(20);
//    A.push_back(30);
//    A.push_back(50);
//    vector<int>B;
//    B.push_back(6);
//    B.push_back(12);
//    B.push_back(18);
//    B.push_back(22);
//    B.push_back(25);
//    B.push_back(28);
//    cout<<"Merge Array:=>"<<endl;
//    MergeArray(A,B);


// }


// #include<bits/stdc++.h>
// using namespace std;
// void Traverse(vector<int>&C){
//     for(auto i:C)
//     cout<<i<<" ";
// }
// void UnionArray(vector<int>A,vector<int>B){
//     vector<int>C;
//     int m=A.size();
//     int n=B.size();
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(A[i]<B[j]){
//             C.push_back(A[i]);
//             i++;
//         }
//         else if(B[j]<A[i]){
//             C.push_back(B[j]);
//             j++;
//         }
//             else{
//             C.push_back(A[i]);
//             i++;
//             j++;
//         }
//     }
//     while(i<m){
//         C.push_back(A[i]);
//         i++;
//     }
//     while(j<n){
//         C.push_back(B[j]);
//         j++;
//     }
    
//     Traverse(C);

// }
// int main(){
//    vector<int>A;
//    A.push_back(5);
//    A.push_back(10);
//    A.push_back(20);
//    A.push_back(30);
//    A.push_back(6);
//    vector<int>B;
//    B.push_back(6);
//    B.push_back(12);
//    B.push_back(18);
//    B.push_back(22);
//    B.push_back(25);
//    B.push_back(28);
//    cout<<"Union Array:=>"<<endl;
//    UnionArray(A,B);


// }

// #include<bits/stdc++.h>
// using namespace std;
// void Traverse(vector<int>&C){
//     for(auto i:C)
//     cout<<i<<" ";
// }
// void Intersection(vector<int>A,vector<int>B){
//     vector<int>C;
//     int m=A.size();
//     int n=B.size();
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(A[i]<B[j]){
//             i++;
//         }
//         else if(B[j]<A[i]){
//             j++;
//         }
//         else{
//             C.push_back(A[i]);
//             i++;
//             j++;
//         }
//     }
    
//     Traverse(C);

// }
// int main(){
//    vector<int>A;
//    A.push_back(5);
//    A.push_back(10);
//    A.push_back(20);
//    A.push_back(30);
//    A.push_back(50);
//    vector<int>B;
//    B.push_back(6);
//    B.push_back(12);
//    B.push_back(10);
//    B.push_back(20);
//    B.push_back(25);
//    B.push_back(28);
//    cout<<"Intersection Array:=>"<<endl;
//    Intersection(A,B);


// }

// #include<bits/stdc++.h>
// using namespace std;
// void Traverse(vector<int>&C){
//     for(auto i:C)
//     cout<<i<<" ";
// }
// void AminusB(vector<int>A,vector<int>B){
//     vector<int>C;
//     int m=A.size();
//     int n=B.size();
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(A[i]<B[j]){
//             C.push_back(A[i]);
//             i++;
//         }
//         else if(B[j]<A[i]){
//             j++;
//         }
//         else{
//             i++;
//             j++;
//         }
//     }
//     while(i<m){
//         C.push_back(A[i]);
//         i++;
//     }
    
    
    
//     Traverse(C);

// }
// int main(){
//    vector<int>A;
//    A.push_back(5);
//    A.push_back(10);
//    A.push_back(20);
//    A.push_back(30);
//    A.push_back(50);
//    vector<int>B;
//    B.push_back(6);
//    B.push_back(12);
//    B.push_back(18);
//    B.push_back(22);
//    B.push_back(25);
//    B.push_back(28);
//    cout<<"Merge Array:=>"<<endl;
//    AminusB(A,B);


// }

// #include<bits/stdc++.h>
// using namespace std;
// void Traverse(vector<int>&C){
//     for(auto i:C)
//     cout<<i<<" ";
// }
// void BminusA(vector<int>A,vector<int>B){
//     vector<int>C;
//     int m=A.size();
//     int n=B.size();
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(A[i]<B[j]){
//             i++;
//         }
//         else if(B[j]<A[i]){
//             C.push_back(B[j]);
//             j++;
//         }
//         else{
//             i++;
//             j++;
//         }
//     }
//     while(i<n){
//         C.push_back(B[j]);
//         j++;
//     }
    
//     Traverse(C);

// }
// int main(){
//    vector<int>A;
//    A.push_back(5);
//    A.push_back(10);
//    A.push_back(20);
//    A.push_back(30);
//    A.push_back(50);
//    vector<int>B;
//    B.push_back(6);
//    B.push_back(10);
//    B.push_back(18);
//    B.push_back(20);
//    B.push_back(25);
//    B.push_back(30);
//    B.push_back(60);
//    B.push_back(70);
//    cout<<"Array Difference:=>"<<endl;
//    BminusA(A,B);


// }


#include<bits/stdc++.h>
using namespace std;
void Traverse(vector<int>&C){
    for(auto i:C)
    cout<<i<<" ";
}
void BminusA(vector<int>A,vector<int>B){
    vector<int>C;
    int m=A.size();
    int n=B.size();
    int i=0,j=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            C.push_back(A[i]);
            i++;
        }
        else if(B[j]<A[i]){
            C.push_back(B[j]);
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    while(i<m){
        C.push_back(A[i]);
        i++;
    }
    while(j<n){
        C.push_back(B[j]);
        j++;
    }
    
    Traverse(C);

}
int main(){
   vector<int>A;
   A.push_back(5);
   A.push_back(10);
   A.push_back(20);
   A.push_back(30);
   A.push_back(50);
   vector<int>B;
   B.push_back(6);
   B.push_back(10);
   B.push_back(18);
   B.push_back(20);
   B.push_back(25);
   B.push_back(30);
   B.push_back(60);
   B.push_back(70);
   cout<<"Array Difference:=>"<<endl;
   BminusA(A,B);


}