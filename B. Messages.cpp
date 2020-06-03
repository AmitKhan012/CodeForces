# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, a, b, c, t, ans = 0;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &t);
    int arr[n];
    if(b < c){
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            ans += a - (t - arr[i]) * b + (t - arr[i]) * c;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        ans = a * n;
    }
    printf("%d\n", ans);
    return 0;
}
