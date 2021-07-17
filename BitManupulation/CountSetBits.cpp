// Brian Kernighan's Algorithm: 
// Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n){
        count++;
        n = n & n - 1;
    }
    cout << count << endl;
    return 0;
}

// GFG Submission
// class Solution {
//   public:
//     int setBits(int n) {
//        int count = 0;
//         while(n){
//             count++;
//             n = n & n - 1;
//         }
//         return count;
//     }
// };