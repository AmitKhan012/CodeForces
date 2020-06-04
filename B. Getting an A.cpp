# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, g, sum = 0, ans = 0, index = 0;
    double r;
    vector <int> v;
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%d", &g);
        v.push_back(g);
        sum += g;
    }
 
    r = (sum * 1.0) / (n * 1.0);
    r = round(r);
 
    sort(v.begin(), v.end());
 
    while(r < 5){
        ans++;
        sum -= v[index];
        sum += 5;
        r = (sum * 1.0) / (n * 1.0);
        r = round(r);
        index++;
    }
 
    printf("%d\n", ans);
 
    return 0;
}
