#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int> >mat(m,vector<int>(n,0));
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    int i, k = 0, l = 0;
    while(k < m && l < n){
        for(i = k; i < n; i++){
            cout << mat[k][i] << " ";
        }
        k++;
        for(i = l; i < m; i++){
            cout << mat[i][n - 1] << " ";
        }
        n--;
        if(k < m){
           for(i = m - 1; i >= k; i++){
               cout << mat[m - 1][i] << " ";
           } 
           m--;
        }
        if(l < n){
            for(i = n - 1; i >= l; i++){
                cout << mat[i][l] << " ";
            }
            l++;
        }
    }
}

// GFG Submission
// class Solution
// {   
//     public: 
// Function to return a list of integers denoting spiral traversal of matrix.
//     vector<int> spirallyTraverse(vector<vector<int> > a, int m, int n) {
//         vector<int>answer;
//         int i, k = 0, l = 0;
    
//         while (k < m && l < n) {
//             for (i = l; i < n; ++i) {
//                answer.push_back(a[k][i]);
//             }
//             k++;
     
//             for (i = k; i < m; ++i) {
//                  answer.push_back(a[i][n - 1]);
//             }
//             n--;
     
//             if (k < m) {
//                 for (i = n - 1; i >= l; --i) {
//                      answer.push_back(a[m - 1][i]);
//                 }
//                 m--;
//             }
     
//             if (l < n) {
//                 for (i = m - 1; i >= k; --i) {
//                     answer.push_back(a[i][l]);
//                 }
//                 l++;
//             }
//         }
//         return answer;
//     }
// };