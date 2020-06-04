# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, t, len;
    char s[20];
    vector <int> v;
 
    scanf("%d", &n);
    scanf(" %s", s);
 
    for(int i = 0; i < n; i++){
        if(s[i] == '0' || s[i] == '1'){
            continue;
        }
        if(s[i] == '4'){
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
        }
        else if(s[i] == '6'){
            v.push_back(3);
            v.push_back(5);
        }
        else if(s[i] == '8'){
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
            v.push_back(7);
        }
        else if(s[i] == '9'){
            v.push_back(2);
            v.push_back(3);
            v.push_back(3);
            v.push_back(7);
        }
        else{
            t = s[i] - 48;
            v.push_back(t);
        }
    }
 
    sort(v.begin(), v.end());
 
    len = v.size();
 
    for(int i = len - 1; i >= 0; i--){
        printf("%d", v[i]);
    }
 
    printf("\n");
 
    return 0;
 
}
