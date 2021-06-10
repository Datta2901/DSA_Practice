/*  
    Problem : ReverseArray or string 
*/


#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t; 
}

int main(){
    int size;
    cin >> size;
    // int numbers[size]; --> For Array
    char numbers[size];  // For String

    for(int i = 0; i < size; i++){
       cin >> numbers[i]; 
    }

    int start = 0,end = size - 1;

    while(start < end ){
        swap(numbers[start],numbers[end]);
        start++;
        end--;
    }

    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}

// In python we can use slice operator A[::-1] to reverse
