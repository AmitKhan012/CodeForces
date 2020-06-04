# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, ans = 0, i = 0;
    int a[] = {100, 20, 10, 5, 1};
 
    scanf("%d", &n);
 
    while(n > 0){
        ans += n / a[i];
        n = n % a[i];
        i++;
    }
 
    printf("%d\n", ans);
 
 
 
    return 0;
}
