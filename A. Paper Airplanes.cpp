# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int k, n, s, p, integerAns;
    scanf("%d %d %d %d", &k, &n, &s, &p);
    double x, y, total, ans;
    x = (n * 1.0) / s;
    total = ceil(x);
    total *= k;
    y = total / p;
    ans = ceil(y);
    integerAns = ans;
    printf("%d\n", integerAns);
 
 
    return 0;
}
