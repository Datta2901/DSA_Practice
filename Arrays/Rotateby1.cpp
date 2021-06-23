/*
    problem: Write a program to cyclically rotate an array by one.
*/

// IMPORTANT : In C++ Arrays are passed to a function as pass by reference 

// Approach : just changing each element by one
// if we use vector it is just to delete first element and push it back 

#include<bits/stdc++.h>
using namespace std;


void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}


void AntiClockwise(int numbers[],int size){
    // Anti Clockwise
    int temp = numbers[0];
    for(int i = 1; i < size; i++){
        numbers[i - 1] = numbers[i];
    }
    numbers[size - 1] = temp;
    printArray(numbers,size);
}

void Clockwise(int numbers[],int size){
    //clockwise
    int temp = numbers[size - 1];
    for(int i = size - 1; i > 0; i--){
        numbers[i] = numbers[i - 1];
    }
    numbers[0] = temp;
    printArray(numbers,size);
}

int main(){
    int size;
    cin >> size;

    int numbers[size],numbers2[size];
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
        numbers2[i] = numbers[i];
    }
    cout << "Anti clockwise is : ";
    AntiClockwise(numbers,size); 
    cout << "Clockwise is : ";
    // printArray(numbers,size);
    Clockwise(numbers2,size);

    return 0;
}

// GFG Submission 
// void rotate(int numbers[], int size)
// {
//     int temp = numbers[size - 1];
//     for(int i = size - 1; i > 0; i--){
//         numbers[i] = numbers[i - 1];
//     }
//     numbers[0] = temp;
// }