# include <bits/stdc++.h>
using namespace std;
 
int fx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int fy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
 
int main(){
 
    int n, m, d, x, y, nx, ny, boom;
    bool flag = true;
    char str[105][105];
    char c;
 
    scanf("%d %d", &n, &m);
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf(" %c", &str[i][j]);
        }
    }
 
    for(int i = 0; i < n && flag; i++){
        for(int j = 0; j < m && flag; j++){
            c = str[i][j];
            if(c == '.'){
                x = i;
                y = j;
                for(int k = 0; k < 8; k++){
                    nx = x + fx[k];
                    ny = y + fy[k];
                    if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                        if(str[nx][ny] == '*'){
                            flag = false;
                            break;
                        }
                    }
                }
            }
            else if(c != '*'){
                d = c - 48;
                boom = 0;
                x = i;
                y = j;
                for(int k = 0; k < 8; k++){
                    nx = x + fx[k];
                    ny = y + fy[k];
                    if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                        if(str[nx][ny] == '*'){
                            boom++;
                        }
                    }
                }
                if(boom != d){
                    flag = false;
                }
            }
        }
    }
 
    if(flag){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
 
 
    return 0;
}
