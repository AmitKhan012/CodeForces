#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
 
        char s[105];
        scanf("%s",s);
        char color[] = {'R','B','Y','G'};
        char onec, twoc, threec, fourc;
        int one=0 , two=0 , three=0 , four=0 , len = strlen(s);
        for( int i=0 ; i<len ; i+=4){
                if(s[i] == '!')
                    one++;
                else{
                    onec = s[i];
                }
        }
        for( int i=1 ; i<len ; i+=4){
                if(s[i] == '!')
                    two++;
                else{
                    twoc = s[i];
                }
        }
        for( int i=2 ; i<len ; i+=4){
                if(s[i] == '!')
                    three++;
                else{
                    threec = s[i];
                }
        }
        for( int i=3 ; i<len ; i+=4){
                if(s[i] == '!')
                    four++;
                else{
                    fourc = s[i];
                }
        }
        for( int i=0 ; i<4 ; i++){
            if(color[i]== onec)
                cout<<one;
            else if(color[i]== twoc)
                cout<<two;
            else if(color[i]== threec)
                cout<<three;
            else if(color[i]== fourc)
                cout<<four;
            if(i==3)
                cout<<endl;
            else
                cout<<' ';
        }
 
    return 0;
}
