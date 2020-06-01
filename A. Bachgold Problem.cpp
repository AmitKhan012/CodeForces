# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
 
    int n, k;
 
        scanf("%d", &n);
        if(n % 2 == 0){
            k = n / 2;
            printf("%d\n2", k);
            k--;
            while(k--){
                printf(" 2");
            }
            printf("\n");
        }
        else{
            n -= 3;
            k = 1;
            k += n / 2;
            printf("%d\n", k);
            k--;
            while(k--){
                printf("2 ");
            }
            printf("3\n");
 
        }
 
 
}
