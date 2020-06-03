# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, m, c, nonzero = 0, ones = 0, points = 0;
    int Count[1005];
    for(int i = 1; i <= 1005; i++){
        Count[i] = 0;
    }
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &c);
        if(Count[c] == 0){
            Count[c]++;
            nonzero++;
            ones++;
        }
        else{
            if(Count[c] == 1){
                ones--;
            }
            Count[c]++;
        }
        if(nonzero == n){
            points++;
            nonzero -= ones;
            ones = 0;
            for(int j = 1; j <= n; j++){
                Count[j]--;
                if(Count[j] == 1){
                    ones++;
                }
            }
        }
    }
    printf("%d\n", points);
 
}
