#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size,k;
    cin >> size >> k;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int minEle, maxEle;
    int result = arr[size - 1] - arr[0];

    for (int i = 1; i <= size - 1; i++) {
        maxEle = max(arr[i - 1] + k, arr[size - 1] - k);
        minEle = min(arr[0] + k, arr[i] - k);
        result = min(result, maxEle - minEle);
    }
    cout << result << endl;
    return 0;
}