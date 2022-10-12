#include<bits/stdc++.h>


using namespace std;

int main(){
    string s;
    int rep = 0;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s;

    for (int i; i < s.size(); i++){
        rep = 0;
        while(s[i] == s[i+1]){
            rep+=1;
            i++;
        }
        if (rep % 2 != 0 ){
            cout << "NO SOLUTION";
            break;
        }
        else{
            
        }
    }
    return 0;
}