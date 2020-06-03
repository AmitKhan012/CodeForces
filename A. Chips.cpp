# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
    int n, m, r,  i = 1;
    scanf("%d %d", &n, &m);
    r = (n * (n+1)) / 2;
    m = m % r;
    while(i <= m){
        m -= i;
        i++;
    }
    printf("%d\n", m);
}
