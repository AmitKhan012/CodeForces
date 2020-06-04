# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    int a[1005];
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
 
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            printf("%d", a[i] - 1);
        }
        else{
            printf("%d", a[i]);
        }
        if(i != n - 1){
            printf(" ");
        }
    }
    printf("\n");
 
    return 0;
 
}
