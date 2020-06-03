# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, k, row, column, l, r, u, d, maxpossible = 0;
    scanf("%d %d", &n, &k);
    char field[105][105];
    int possible[105][105];
    memset(possible, 0, sizeof(possible));
 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            scanf(" %c", &field[i][j]);
        }
    }
 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(field[i][j] == '#'){
                continue;
            }
            row = i;
            column = j;
            l = column;
            while(l > 1 && column - l < k - 1 && field[row][l-1] == '.'){
                l--;
            }
            r = column;
            while(r < n && r - column < k - 1 && field[row][r+1] == '.'){
                r++;
            }
            u = row;
            while(u > 1 && row - u < k - 1 && field[u-1][column] == '.'){
                u--;
            }
            d = row;
            while(d < n && d - row < k - 1 && field[d+1][column] == '.'){
                d++;
            }
            int hdif = r - l + 1;
            if(hdif >= k){
                possible[row][column] = (hdif - k) + 1;
            }
            int vdif = d - u + 1;
            if(vdif >= k){
                possible[row][column] += (vdif - k + 1);
            }
        }
    }
 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(maxpossible < possible[i][j]){
                maxpossible = possible[i][j];
                row = i;
                column = j;
            }
        }
    }
 
    if(maxpossible == 0){
        printf("1 1\n");
    }
    else{
        printf("%d %d\n", row, column);
    }
 
    return 0;
}
