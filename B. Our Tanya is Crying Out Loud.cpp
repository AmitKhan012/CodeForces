# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int n, k, a, b, c;
    long long int ans = 0;
    cin >> n >> k >> a >> b;
    while(n > 1){
        if(n < k || k == 1){
            ans += (n - 1) * a;
            break;
        }
        if(n % k == 0){
            c = n/k;
            c = n - c;
            c *= a;
            if(c < b){
                ans += c;
            }
            else{
                ans += b;
            }
            n /= k;
        }
        else{
            c = n/k;
            c *= k;
            ans += (n - c) * a;
            n = c;
        }
    }
    cout << ans << endl;
    return 0;
 
}
