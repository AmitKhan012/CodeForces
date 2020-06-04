# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, m, team = 0;
    scanf("%d %d", &n, &m);
 
    if(n * 2 <= m){
        printf("%d\n", n);
    }
    else if(m * 2 <= n){
        printf("%d\n", m);
    }
    else{
        while(n > 0 && m > 0){
            if(n > m){
                if(n - 2 >= 0 && m - 1 >= 0){
                    team++;
                    n = n - 2;
                    m = m - 1;
                }
                else{
                    n = n - 2;
                    m = m - 1;
                }
            }
            else{
                if(n - 1 >= 0 && m - 2 >= 0){
                    team++;
                    n = n - 1;
                    m = m - 2;
                }
                else{
                    n = n - 1;
                    m = m - 2;
                }
            }
        }
        printf("%d\n", team);
    }
 
    return 0;
}
