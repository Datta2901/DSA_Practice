/* 
    Problem : to find Min and maximum element in a array
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int numbers[size];
    int min = INT_MAX,max = INT_MIN;
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
        if(min > numbers[i]){
            min = numbers[i];
        }

        if(max < numbers[i]){
            max = numbers[i];
        }
    }

    cout <<"minimum : " <<  min << "  maximum : " << max << endl;

    return 0;
}