# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int m, s, tm, ts;
    vector <int> small, big;
    scanf("%d %d", &m, &s);
    if(s == 0 && m > 1){
        printf("-1 -1\n");
        return 0;
    }
    if(s > m * 9){
        printf("-1 -1\n");
        return 0;
    }
    tm = m;
    ts = s;
 
    for(int j = 1; j < m; j++){
        for(int i = 9; i >= 0; i--){
            if(ts - i >= 1){
                small.push_back(i);
                ts = ts - i;
                break;
            }
        }
    }
 
    small.push_back(ts);
 
    for(int i = m - 1; i >= 0; i--){
        printf("%d", small[i]);
    }
 
    printf(" ");
 
    ts = s;
 
    for(int j = 0; j < m; j++){
        for(int i = 9; i >= 0; i--){
            if(ts - i >= 0){
                big.push_back(i);
                ts = ts - i;
                break;
            }
        }
    }
 
    for(int i = 0; i < m; i++){
        printf("%d", big[i]);
    }
    printf("\n");
 
    return 0;
}
