# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, a, ans = 1;
    map <int, int> m;
    map <int, int> :: iterator it;
 
    scanf("%d", &n);
 
    while(n--){
        scanf("%d", &a);
        it = m.find(a);
        if(it == m.end()){
            m[a] = 1;
        }
        else{
            m[a]++;
            if(ans < m[a]){
                ans = m[a];
            }
        }
    }
 
    printf("%d\n", ans);
 
    return 0;
 
}
