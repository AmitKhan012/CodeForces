# include <bits/stdc++.h>
using namespace std;
 
# define mx 1000005
 
int main(){
 
    bool flag[mx];
    for(int i = 0; i < mx; i++){
        flag[i] = 0;
    }
    for(int i = 0; i < 1001; i++){
        flag[i*i] = 1;
    }
    int n, ans = 0, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num >= 0){
            if(flag[num] == 1){
                continue;
            }
            else{
               ans = max(ans, num);
            }
        }
        else{
            if(ans == 0){
                ans = num;
            }
            else{
                ans = max(ans, num);
            }
        }
    }
    printf("%d\n", ans);
}
