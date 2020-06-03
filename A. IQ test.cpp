# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
    int n,  one = 0, zero = 0, num;
    int ans[2];
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        if(num % 2 == 0){
            zero++;
            ans[0] = i;
        }
        else{
            one++;
            ans[1] = i;
        }
    }
    if(one < zero){
        printf("%d\n", ans[1]);
    }
    else{
        printf("%d\n", ans[0]);
    }
}
