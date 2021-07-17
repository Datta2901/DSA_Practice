#include<bits/stdc++.h>
using namespace std;

int findPosition1(int num);
int findPosition2(int num);
int main(){
    int num;
    cin >> num;
    int count = 1,index = 1;
    if(!(num && !(num & (num - 1)))){
        cout << -1 << endl;
        return 0;
    }
    while( !(index & num)){
        index = index << 1;
        count++;
    }
    cout << count << endl;
    return 0;
}
int findPosition1(int num) {
       int count = 0,index = 1;
       //power of 2
        if(!(num && !(num & (num - 1)))){
            return -1;
        }
        while(num){
            num = num >> 1;
            count++;
        }
        return count;
}
int findPosition2(int num) {
    int count = 1,index = 1;
    //power of 2
    if(!(num && !(num & (num - 1)))){
        return -1;
    }
    while( !(index & num)){
        index = index << 1;
        count++;
    }
    return count;
}