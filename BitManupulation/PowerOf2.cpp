// If we subtract a power of 2 numbers by 1 then all unset bits after the only set bit become set; and the set bit becomes unset.
// For example for 4 ( 100) and 16(10000), we get the following after subtracting 1 
// 3 –> 011 
// 15 –> 01111
// So, if a number n is a power of 2 then bitwise & of n and n-1 will be zero. We can say n is a power of 2 or not based on the value of n&(n-1). The expression n&(n-1) will not work when n is 0.
//  To handle this case also, our expression will become n& (!n&(n-1))

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // if(n == 0){
    //     cout << "No" << endl;
    // }
    // if(n & (n - 1) == 0){
    //     cout << "Yes" << endl;
    // }else{
    //     cout << "No" << endl;
    // }
    // or
    if( n && (!(n&(n-1)))){
        cout << "Yes" << endl;
    }else{
        cout << "No" <<endl;
    }
    return 0;
}
// GFG submission
// bool isPowerofTwo (long long int x){  
//     return x && (!(x&(x-1)));
// }