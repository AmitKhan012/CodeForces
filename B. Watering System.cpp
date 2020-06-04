# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, a, b, s1, total = 0, ans = 0;
    scanf("%d %d %d", &n, &a, &b);
    int s[n-1];
    double amount;
 
    for(int i = 0; i < n; i++){
        if(i == 0){
            scanf("%d", &s1);
            total += s1;
        }
        else{
            scanf("%d", &s[i-1]);
            total += s[i-1];
        }
    }
 
    sort(s, s + (n - 1));
 
    amount = s1 * a * 1.0;
    amount = (amount * 1.0) / total;
 
    for(int i = n - 2; i >= 0; i--){
        if(amount >= b){
            break;
        }
        ans++;
        total -= s[i];
        amount = s1 * a * 1.0;
        amount = (amount * 1.0)/ total;
    }
 
    printf("%d\n", ans);
 
    return 0;
}
