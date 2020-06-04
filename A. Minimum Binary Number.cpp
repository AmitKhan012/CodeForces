# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, one = 0, zero = 0;
    char s[105];
 
    scanf("%d", &n);
    scanf(" %s", s);
 
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            zero++;
        }
        else{
            one++;
        }
    }
 
    if(one != 0){
        printf("1");
    }
 
    while(zero--){
        printf("0");
    }
 
    printf("\n");
 
    return 0;
}
