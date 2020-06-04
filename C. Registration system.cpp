# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    string s;
    map <string, int> m;
    map <string, int> :: iterator it;
 
    cin >> n;
 
    while(n--){
        cin >> s;
        it = m.find(s);
        if(it == m.end()){
            m[s] = 1;
            cout << "OK" << endl;
        }
        else{
            cout << s << m[s] << endl;
            m[s]++;
        }
    }
 
    return 0;
}
