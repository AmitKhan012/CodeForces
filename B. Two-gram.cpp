# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, ans = 0;
    string s, index, ansS;
    map <string, int> m;
    map <string, int> :: iterator it;
 
    cin >> n;
    cin >> s;
 
    for(int i = 0; i < n - 1; i++){
        index = s[i];
        index += s[i+1];
        it = m.find(index);
        if(it == m.end()){
            m[index] = 1;
        }
        else{
            m[index]++;
        }
    }
 
    it = m.begin();
 
    for(; it != m.end(); it++){
        if(it -> second > ans){
            ans = it -> second;
            ansS = it -> first;
        }
    }
 
    cout << ansS << endl;
 
    return 0;
}
