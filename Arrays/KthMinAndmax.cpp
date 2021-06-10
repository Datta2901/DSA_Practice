/*
    problem : Find the kth minimum and maximum element in an array
*/

// Approach 
// 1: sort -->  k - 1 element as kth min ,n - k - 1  element as kth max
// 2: Use map to count frequencies of each element and print required results

// 2nd implementation

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,k;
    cin >> size >> k;
    int numbers[size];

    map<int,int>freq;

    for(int i = 0; i < size; i++){
        cin >> numbers[i];
        freq[numbers[i]]++;
    }

    int min = 0,max = 0;
    // map<int,int>::iterator it
    for(auto it = freq.begin(); it != freq.end(); it++){
        min += it->second;
        if(min >= k){
            min = it->first;
            break;
        }
    }
    // map<int,int>::reverse_iterator itr

    for(auto it = freq.rbegin(); it != freq.rend(); it++){
        max += it->second;
        if(max >= k){
            max = it->first;
            break;
        }
    }

    cout << "kth minimum is "  << min << endl;
    cout << "kth maximum is "  << max << endl;

    return 0;
}
