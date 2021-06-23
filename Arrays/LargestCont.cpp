/*
    problem : find Largest sum contiguous Subarray
*/

// Kadanes algorithm
#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int numbers[size];
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }

    int answer = INT_MIN,maxArray = 0;
    for(int i = 0; i < size; i++){
        maxArray += numbers[i];
        if(answer < maxArray){
            answer = maxArray;
        }
        if(maxArray < 0){
            maxArray = 0;
        }
    }

    cout << "Largest sum contiguous Subarray :" << answer << endl;

    return 0;
}


// Gfg Submission
// class Solution{
//     public:
// arr: input array
// n: size of array
//Function to find the sum of contiguous subarray with maximum sum.
//     int maxSubarraySum(int numbers[], int size){
        
//        int answer = INT_MIN,maxArray = 0;
//         for(int i = 0; i < size; i++){
//             maxArray += numbers[i];
//             if(answer < maxArray){
//                 answer = maxArray;
//             }
//             if(maxArray < 0){
//                 maxArray = 0;
//             }
//         }
//         return answer;
//     }
// };