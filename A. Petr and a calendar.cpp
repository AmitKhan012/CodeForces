# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
 
    int m, d, com = 1, day;
    scanf("%d %d", &m, &d);
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        day = 31 - 8 + d;
        com += day / 7;
        if(day % 7 != 0){
            com++;
        }
        printf("%d\n", com);
    }
    else if(m == 2){
        day = 28 - 8 + d;
        com += day / 7;
        if(day % 7 != 0){
            com++;
        }
        printf("%d\n", com);
    }
    else{
        day = 30 - 8 + d;
        com += day / 7;
        if(day % 7 != 0){
            com++;
        }
        printf("%d\n", com);
    }
 
 
}
