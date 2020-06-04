# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a1, a2, a3, a4, a5, a6, ans;
    scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6);
 
    ans = (a1 + a2 + a3) * (a1 + a2 + a3);
    ans -= (a1 * a1);
    ans -= (a3 * a3);
    ans -= (a5 * a5);
 
    printf("%d\n", ans);
 
    return 0;
}
