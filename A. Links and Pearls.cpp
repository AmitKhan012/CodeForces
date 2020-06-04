# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int len, o = 0, dash = 0;
    char str[105];
 
    scanf("%s", str);
 
    len = strlen(str);
 
    for(int i = 0; i < len; i++){
        if(str[i] == 'o'){
            o++;
        }
        else{
            dash++;
        }
    }
 
    if(o == 0){
        printf("YES\n");
    }
    else if(dash % o == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
 
    return 0;
}
