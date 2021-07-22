#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string solve(int a);
};

string Solution::solve(int A) {
    vector<int>digits(500,0);
    digits[0] = 1;
    int currSize = 1,carry;
    for(int i = 2; i <= A; i++){
        carry = 0;
        for(int j = 0; j < currSize; j++){
            int mult = digits[j] *i + carry;
            digits[j] = mult % 10;
            carry = mult / 10;  
        }
        while(carry){
            digits[currSize] = carry % 10;
            carry /= 10;
            currSize++;
        }
    }

    string answer = "";
    for(int i = currSize- 1; i >= 0; i--){
        answer += to_string(digits[i]);
    }
    return answer;
}


int main(){
    Solution obj;
    int a;
    cin >> a;
    cout << obj.solve(a) << endl;
    return 0;
}




// GFG Submission
// class Solution {
// public:
//     vector<int> factorial(int A){
//        vector<int>digits(2600,0);
//         digits[0] = 1;
//         int currSize = 1,carry;
//         for(int i = 2; i <= A; i++){
//             carry = 0;
//             for(int j = 0; j < currSize; j++){
//                 int mult = digits[j]*i + carry;
//                 digits[j] = mult % 10;
//                 carry = mult / 10;  
//             }
//             while(carry){
//                 digits[currSize] = carry % 10;
//                 carry /= 10;
//                 currSize++;
//             }
//         }
//         digits.resize(currSize);
//         reverse(digits.begin(),digits.end());
//         return digits;
//     }
// };