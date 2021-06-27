/*
    problem : Count Inversion

    Given an array of integers. Find the Inversion Count in the array. 
    Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
    Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> num;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        num.push_back(a);
    }

    // n^2 approach
    long long int answer = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(num[i] > num[j]){
                answer++;
            }
        }
    }


    cout << answer << endl;

    return 0;
}