# include <iostream>
# include <cstdio>
# include <cstring>
# include <vector>
using namespace std;
 
int main(){
 
    int num = 1, len;
    char word[52];
    scanf("%s", word);
    len = strlen(word);
    vector <char> v1(word,word+len);
    vector <char> v2;
    v2 = v1;
 
    while(true){
        vector <char> :: iterator ifirst = v2.begin();
        v2.insert(ifirst,v2[len-1]);
        v2.pop_back();
        if(v2 == v1){ break; }
        num++;
    }
    printf("%d\n", num);
 
    return 0;
}
