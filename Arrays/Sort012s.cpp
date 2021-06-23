/*
    problem : Sort 0s ,1s,2s without using any sorting techniques
*/

// Approach count 0s and 1s and display results

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int count0 = 0,count1 = 0;
    int numbers[size];
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
        if(numbers[i] == 0){
            count0++;
        }
        if(numbers[i] == 1){
            count1++;
        }
    }

    for(int i = 0; i < size; i++){
        if(i < count0){
            // cout << 0 << " ";  you can directly print or store in array
            numbers[i] = 0;
        }else if(i < count0 + count1){
            numbers[i] = 1;
        }else{
            numbers[i] = 2;
        }
    }

    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }

    return 0;
}
// Gfg Submitted Solution
// class Solution
// {
//     public:
//     void sort012(int numbers[], int size)
//     {
//         int count0 = 0,count1 = 0;

//        for(int i = 0; i < size; i++){
//         if(numbers[i] == 0){
//             count0++;
//         }
//         if(numbers[i] == 1){
//             count1++;
//         }
//     }

//     for(int i = 0; i < size; i++){
//         if(i < count0){
//             numbers[i] = 0;
//         }else if(i < count0 + count1){
//             numbers[i] = 1;
//         }else{
//             numbers[i] = 2;
//         }
//     }
//     }
    
// };