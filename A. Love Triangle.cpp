# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
    int a[5005];
    int n, f, check = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= n; i++){
        f = a[i];
        for(int j = 1; j < 3; j++){
            f = a[f];
        }
        if(i == f){
            check = 1;
            break;
        }
    }
    if(check == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
