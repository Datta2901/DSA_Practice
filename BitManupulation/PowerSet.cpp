#include<bits/stdc++.h>
using namespace std;

vector<string> AllPossibleStrings(string s);

int main(){
    string s;
    cin >> s;
    vector<string>a = AllPossibleStrings(s);
    for(auto i : a){
        cout << i << " ";
    }
}


// GFG Submission
vector<string> AllPossibleStrings(string s){
	    vector<string>answer;
	    for(int i = 0; i < (1 << s.size()); i++){
	        string a = "";
            for(int j = 0; j < s.size(); j++){
                if(i & (1 << j)){
                    a += s[j];
                }
            }
            if(a != "")
            answer.push_back(a);
        }
        sort(answer.begin(),answer.end());// Lexigraphically smallest
        return answer;
}