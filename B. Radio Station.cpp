# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, m;
    cin >> n >> m;
    map <string, string> m1;
    vector <string> v1, v2;
    string x, y;
    for(int i = 0; i < n; i++){
        getchar();
        cin >> x >> y;
        y = y + ";";
        m1[y] = x;
    }
    for(int i = 0; i < m; i++){
        getchar();
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }
    for(int i = 0; i < m; i++){
        cout << v1[i] << " " << v2[i] << " #" << m1[v2[i]] << endl;
    }
}
