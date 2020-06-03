# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, s, h, m, ans, d;
    int landingtime[105];
    scanf("%d %d", &n, &s);
 
    for(int i = 0; i < n; i++){
        scanf("%d %d", &h, &m);
        landingtime[i] = h * 60 + m;
    }
 
    for(int i = 0; i < n; i++){
        if(i == 0){
            if(s + 1 <= landingtime[i]){
                ans = 0;
                break;
            }
        }
        if(i != n - 1){
            d = landingtime[i+1] - landingtime[i] - 1;
            if(2 * s + 1 <= d){
                ans = landingtime[i] + 1 + s;
                break;
            }
        }
        else{
            ans = landingtime[i] + s + 1;
        }
    }
 
    printf("%d %d\n", ans / 60, ans % 60);
 
    return 0;
}
