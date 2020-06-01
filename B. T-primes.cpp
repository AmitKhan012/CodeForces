# include <iostream>
# include <cstdio>
# include <math.h>
using namespace std;
 
bool prime[1000004];
 
void seive(){
    int i, j;
    prime[1] = 1;
    for(i = 2; i <= sqrt(1000000); i++){
        if(!prime[i]){
            for(j = i; i * j <= 1000000; j++) prime[i*j] = 1;
        }
    }
}
 
int main(){
 
    int n;
    seive();
    scanf("%d", &n);
    while(n--){
        long long int x;
        cin >> x;
        double sqroot = sqrt(x);
        if(ceil(sqroot) == floor(sqroot)){
            int sroot = sqroot;
            if(!prime[sroot]) printf("YES\n");
            else printf("NO\n");
        }
        else{
            printf("NO\n");
        }
    }
}
