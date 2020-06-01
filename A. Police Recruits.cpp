# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
 
    int n, cop, untreated = 0, police = 0;
    scanf("%d", &n);
 
    while(n--){
        scanf("%d", &cop);
        if(cop == -1 && police == 0) { untreated++; }
        else if(cop == -1 && police != 0) { police--;}
        else { police += cop; }
    }
 
    printf("%d\n", untreated);
 
    return 0;
}
