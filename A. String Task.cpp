# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    char v[] = {'A', 'a', 'O', 'o', 'Y', 'y', 'E', 'e', 'U', 'u', 'I', 'i'};
    vector <char> ans;
    char s[105];
    char ch;
    int i, j, len;
    scanf("%s", s);
    len = strlen(s);
    bool c;
 
    for(i = 0; i < len; i++){
        c = true;
        for(j = 0; j < 12 && c; j++){
            if(s[i] == v[j]){
                c = false;
            }
        }
        if(c){
            ans.push_back('.');
            if(s[i] >= 65 && s[i] <= 90){
                ch = s[i] + 32;
                ans.push_back(ch);
            }
            else{
                ans.push_back(s[i]);
            }
        }
 
    }
 
    len = ans.size();
    for(i = 0; i < len; i++){
        printf("%c", ans[i]);
    }
    printf("\n");
 
 
    return 0;
}
