# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
    
        int n, a, b;
        char str[100005];
 
        scanf("%d %d %d", &n, &a, &b);
        scanf("%s", str);
        int ind_a = a - 1;
        int ind_b = b - 1;
        if(str[ind_a] == str[ind_b]){ printf("0\n");}
        else{
            printf("1\n");
        }
    
    return 0;
}
