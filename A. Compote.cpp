# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
 
    int a, b, c, total = 0;
 
        scanf("%d %d %d", &a, &b, &c);
        while(a >= 1 && b >= 2 && c >= 4){
            total += 7;
            a -= 1;
            b -= 2;
            c -= 4;
        }
        printf("%d\n", total);
 
    return 0;
}
