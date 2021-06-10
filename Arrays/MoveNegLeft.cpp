/*
    problem : Move all the negative elements to one side of the array 
*/

#include<bits/stdc++.h>
using namespace std;

void swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}


int main(){
    int size;
    cin >> size;
    int numbers[size];
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }
    
    int neg = 0,i = 0;
 
    while(i < size){
        if(numbers[i] < 0){
            if(i != neg){
                swap(numbers[i],numbers[neg]);
            }
            neg++; 
        }
        i++;
    }

    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }

    return 0;
}