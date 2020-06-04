# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a, b, c, n, t;
 
    scanf("%d %d %d %d", &a, &b, &c, &n);
 
    if(a < c || b < c || a > n - 1 || b > n - 1 || c > n - 1){
            printf("-1\n");
    }
    else{
        t = a + b - c;
        if(t <= n - 1){
            printf("%d\n", n - t);
        }
        else{
            printf("-1\n");
        }
    }
 
    return 0;
}
