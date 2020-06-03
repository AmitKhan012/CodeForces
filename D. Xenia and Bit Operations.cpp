# include <bits/stdc++.h>
using namespace std;
 
# define mx 140000
 
int a[mx];
int tree[4 * mx];
int p, b;
 
void build(int node, int l, int r){
    if(l == r){
        tree[node] = a[l];
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (l + r) / 2;
    build(left, l, mid);
    build(right, mid + 1, r);
    int total = r - l + 1;
    int power = 1, two = 2;
    while(two < total){
        two = two * 2;
        power++;
    }
    if(power % 2 == 0){
        tree[node] = tree[left] ^ tree[right];
    }
    else{
        tree[node] = tree[left] | tree[right];
    }
}
 
void update(int node, int l, int r){
    if(p < l || p > r){
        return;
    }
    if(l == p && r == p){
        tree[node] = b;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (l + r) / 2;
    update(left, l, mid);
    update(right, mid + 1, r);
    int total = r - l + 1;
    int power = 1, two = 2;
    while(two < total){
        two = two * 2;
        power++;
    }
    if(power % 2 == 0){
        tree[node] = tree[left] ^ tree[right];
    }
    else{
        tree[node] = tree[left] | tree[right];
    }
}
 
int main(){
 
    int n, m;
    scanf("%d %d", &n, &m);
    n = pow(2, n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    build(1, 1, n);
    for(int i = 1; i <= m; i++){
        scanf("%d %d", &p, &b);
        update(1, 1, n);
        printf("%d\n", tree[1]);
    }
 
}
