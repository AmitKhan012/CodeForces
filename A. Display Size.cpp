# include <iostream>
# include <cstdio>
# include <math.h>
using namespace std;
 
int main(){
 
    int n, a, b;
    scanf("%d", &n);
    double sroot = sqrt(n);
    if(ceil(sroot) == floor(sroot)){
        a = sroot;
        printf("%d %d\n", a, a);
    }
    else{
        a = sroot;
        while(true){
 
            if(n % a == 0){
                printf("%d %d\n", a, n / a);
                break;
            }
            a--;
        }
    }
    return 0;
}
