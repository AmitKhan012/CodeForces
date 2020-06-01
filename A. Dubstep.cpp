# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;
 
int main(){
    char str[203];
    scanf("%s", str);
    int len = strlen(str);
    int i, j;
    for(i = 0; i < len;){
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            i += 3;
        }
        else{
            printf("%c", str[i]);
            i++;
            if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
                printf(" ");
            }
        }
    }
 
    printf("\n");
 
}
