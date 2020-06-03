# include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k, a, ans = 0;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(k % a == 0 && a > ans){
            ans = a;
        }
    }
    printf("%d\n", k / ans);
}
