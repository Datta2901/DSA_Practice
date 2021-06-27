#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int32_t product = 1;
    int i = num;
    while(i > 0){
        product *= i;
        i--;
    }
    cout << product << endl;
    return 0;
}