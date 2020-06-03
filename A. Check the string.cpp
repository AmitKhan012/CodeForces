# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int len, a = 0, b = 0, c = 0;
    bool check = true;
    string s;
    char current = 'a';
 
    cin >> s;
    len = s.size();
    for(int i = 0; i < len; i++){
        if(s[i] == 'a'){
            a++;
        }
        else if(s[i] == 'b'){
            b++;
        }
        else{
            c++;
        }
        if(i == 0 && s[i] != 'a'){
            check = false;
            break;
        }
        if(s[i] != current){
            if(current == 'a'){
                if(s[i] != 'b'){
                    check = false;
                    break;
                }
                else{
                    current = 'b';
                }
            }
            else if(current == 'b'){
                if(s[i] != 'c'){
                    check = false;
                    break;
                }
                else{
                    current = 'c';
                }
            }
            else{
                check = false;
                break;
            }
        }
    }
    if(a == 0 || b == 0 || c == 0){
        check = false;
    }
    if(c != a && c != b){
        check = false;
    }
    if(check){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
