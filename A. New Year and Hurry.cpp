# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
 
        int n, k, i, time_for_solve = 240, time_spent = 0;
        scanf("%d %d", &n ,&k);
 
        time_for_solve -= k;
 
        for(i = 1; i <= n;){
            time_spent += 5 * i;
            if(time_spent == time_for_solve) { break; }
            if(time_spent > time_for_solve) { i--; break;}
            if(i == n) { break; }
            i++;
        }
 
        printf("%d\n", i);
 
    return 0;
}
