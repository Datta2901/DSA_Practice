#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++){
        if(arr[abs(arr[i])] >= 0){
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }else{
            cout << abs(arr[i]) << endl;
            break;
        }
    }
    return 0;
}