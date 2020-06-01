# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;
 
int main(){
 
    int n, k, G, T;
    char line[104];
    bool obs[104] = {0};
    scanf("%d %d", &n, &k);
    scanf("%s", line);
 
    for(int i = 0; i < n; i++){
        if(line[i] == 'G') G = i;
        else if(line[i] == 'T') T = i;
        else if(line[i] == '#') obs[i] = 1;
    }
    if(G < T){
        while(G < T){
            G += k;
            if(obs[G] && G < T){
                printf("NO\n");
                break;
            }
        }
        if(G == T) printf("YES\n");
        else if(G > T) printf("NO\n");
    }
    else{
        while(G > T){
            G -= k;
            if(obs[G] && G > T){
                printf("NO\n");
                break;
            }
        }
        if(G == T) printf("YES\n");
        else if(G < T) printf("NO\n");
    }
 
 
 
}
