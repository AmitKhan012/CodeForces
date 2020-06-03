# include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    int n, d, x, len, ans = 0;
    vector <int> v;
    scanf("%d %d", &n, &d);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        len = 1;
        while(v[i+len] - v[i] <= d && i + len < n){
            len++;
        }
        if(len > ans){
            ans = len;
        }
    }
    printf("%d\n", n - ans);
 
    return 0;
}
