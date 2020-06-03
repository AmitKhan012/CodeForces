# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
 
    int n, num;
    scanf("%d", &n);
    int x[n+5];
    int y[n+5];
 
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        x[i] = num;
    }
     for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        y[i] = num;
    }
 
    printf("Karen\n");
 
    return 0;
}
