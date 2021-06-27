#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/next-permutation/submissions/

void nextPermutation(vector<int> &numbers){
    int i = numbers.size() - 2;
    while (i >= 0 && numbers[i + 1] <= numbers[i]) {
        i--;
    }
    if (i >= 0) {
        int j = numbers.size() - 1;
        while (numbers[j] <= numbers[i]) {
            j--;
        }
        swap(numbers[i],numbers[j]);
    }
    reverse(numbers.begin() + i + 1,numbers.end());
}

int main(){
    int size;
    cin >> size;
    vector<int>numbers;
    for(int i =0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    nextPermutation(numbers);
    // std::next_permutation(numbers.begin(),numbers.end());
    for(int i = 0; i < size; i++){
        cout << numbers[i] << ' ';
    }

    return 0;
}
