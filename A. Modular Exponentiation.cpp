# include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, r;
    scanf("%d %d", &n, &m);
    if(n > 29){
        printf("%d\n", m);
    }
    else{
        r = pow(2, n);
        printf("%d\n", m % r);
    }
}
