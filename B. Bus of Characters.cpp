# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, len, w, zero = 0, row;
    map <int, int> m;
    char str[400005];
    vector <int> v;
    priority_queue<int> pq;
    scanf("%d", &n);
 
    for(int i = 1; i <= n; i++){
        scanf("%d", &w);
        v.push_back(w);
        m[w] = i;
    }
 
    sort(v.begin(), v.end());
    scanf(" %s", str);
 
    len = 2 * n;
 
    for(int i = 0; i < len; i++){
        if(i != 0){
            printf(" ");
        }
        if(str[i] == '0'){
            w = v[zero];
            pq.push(w);
            zero++;
            row = m[w];
            printf("%d", row);
        }
        else{
            w = pq.top();
            pq.pop();
            row = m[w];
            printf("%d", row);
        }
    }
 
    printf("\n");
 
    return 0;
}
