# include <bits/stdc++.h>
using namespace std;
 
# define vc vector <char>
 
int main(){
 
    int n, c, len, ans = 0;
    int alphabet[26];
    map <vc, int> m;
    map <vc, int> :: iterator it;
    vc root;
    string word;
    scanf("%d", &n);
 
    while(n--){
        cin >> word;
        len = word.length();
        memset(alphabet, 0, sizeof(alphabet));
        root.clear();
        for(int i = 0; i < len; i++){
            c = word[i] - 97;
            if(alphabet[c] == 0){
                alphabet[c] = 1;
                root.push_back(word[i]);
            }
        }
        sort(root.begin(), root.end());
        it = m.find(root);
        if(it == m.end()){
            m[root] = 1;
            ans++;
        }
 
    }
 
    printf("%d\n", ans);
 
    return 0;
}
