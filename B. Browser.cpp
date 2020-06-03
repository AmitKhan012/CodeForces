# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, pos, l, r, ans;
    scanf("%d %d %d %d", &n, &pos, &l, &r);
    if(l == 1 && r == n){
        printf("0\n");
    }
    else if(l == 1){
        if(pos > r){
            ans = pos - r;
            ans++;
        }
        else if(pos == r){
            ans = 1;
        }
        else{
            ans = r - pos;
            ans++;
        }
        printf("%d\n", ans);
    }
    else if(r == n){
        if(pos > l){
            ans = pos - l;
            ans++;
        }
        else if(pos == l){
            ans = 1;
        }
        else{
            ans = l - pos;
            ans++;
        }
        printf("%d\n", ans);
    }
    else{
        if(pos == l || pos == r){
            ans = r - l;
            ans += 2;
        }
        else if(l < pos && pos < r){
            ans = r - l;
            if(r - pos < pos - l){
                ans += (r - pos);
            }
            else{
                ans += (pos - l);
            }
            ans += 2;
        }
        else if(pos < l){
            ans = r - pos;
            ans += 2;
        }
        else if(pos > r){
            ans = pos - l;
            ans += 2;
        }
        printf("%d\n", ans);
    }
 
 
 
}
