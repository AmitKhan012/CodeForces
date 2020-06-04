# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, m;
    string s;
    map <string, int> m1;
    map <string, int> :: iterator it;
    map <string, string> m2;
 
    m1["purple"] = -1;
    m2["purple"] = "Power";
    m1["green"] = -1;
    m2["green"] = "Time";
    m1["blue"] = -1;
    m2["blue"] = "Space";
    m1["orange"] = -1;
    m2["orange"] = "Soul";
    m1["red"] = -1;
    m2["red"] = "Reality";
    m1["yellow"] = -1;
    m2["yellow"] = "Mind";
 
    cin >> n;
 
    for(int i = 0; i < n; i++){
        cin >> s;
        m1[s] = 0;
    }
 
    m = 6 - n;
 
    cout << m << endl;
 
    for(it = m1.begin(); it != m1.end(); it++){
        if(it -> second == -1){
            cout << m2[it -> first] << endl;
        }
    }
 
    return 0;
}
