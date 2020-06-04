# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, k, half;
 
    scanf("%d %d", &n, &k);
 
    if(k % 2 == 0){
        half = k / 2;
        printf("YES\n");
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < n; j++){
                if(i != 0 && i != 3 && j >= 1 && j <= half){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    else if(k == n - 2){
        printf("YES\n");
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < n; j++){
                if(i != 0 && i != 2 && i != 3 && j >= 1 && j <= n-2){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    else if(k < n - 2){
        half = n / 2;
        half;
        half -= (k/2);
        printf("YES\n");
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < n; j++){
                if(i != 0 && i != 2 && i != 3 && j >= half && k > 0){
                    printf("#");
                    k--;
                }
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
 
 
    }
    else{
        printf("YES\n");
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < n; j++){
                if(i != 0 && i != 3 && j >= 1 && j <= n - 2 && k > 1){
                    printf("#");
                    k--;
                }
                else if(i == 2 && j == n - 2){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
    }
 
    return 0;
}
