# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, k, a;
    vector <int> v;
 
    scanf("%d %d", &n, &k);
 
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        v.push_back(a);
    }
 
    sort(v.begin(), v.end());
 
    if(k == n){
        printf("%d\n", v[n-1]);
    }
    else if(k == 0){
        if(v[0] == 1){
            printf("-1\n");
        }
        else{
            printf("1\n");
        }
    }
    else{
        if(v[k-1] == v[k]){
            printf("-1\n");
        }
        else{
            printf("%d\n", v[k-1]);
        }
    }
 
    return 0;
}
