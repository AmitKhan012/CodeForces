# include <bits/stdc++.h>
using namespace std;
 
# define mx 1005
int flag[mx];
int fibo[mx];
 
void findFibo(int n){
    if(n <= 2){
        return;
    }
    else{
        if(fibo[n-2] == 0){
            findFibo(n-2);
        }
        if(fibo[n-1] == 0){
            findFibo(n-1);
        }
        fibo[n] = fibo[n-1] + fibo[n-2];
        flag[fibo[n]] = 1;
    }
}
 
int main(){
 
    int n;
    scanf("%d", &n);
    for(int i = 1; i < mx; i++){
        fibo[i] = 0;
        flag[i] = 0;
    }
    fibo[1] = 1;
    fibo[2] = 1;
    flag[1] = 1;
    findFibo(20);
    for(int i = 1; i <= n; i++){
        if(flag[i] == 1){
            printf("O");
        }
        else{
            printf("o");
        }
    }
    printf("\n");
}
