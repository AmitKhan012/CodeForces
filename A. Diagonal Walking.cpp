# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, d, i;
    string sequence;
    scanf("%d", &n);
    cin >> sequence;
    d = 0;
    i = 0;
    while(i < n - 1){
        if(sequence[i] != sequence[i+1]){
            d++;
            i += 2;
        }
        else{
            i++;
        }
    }
    printf("%d\n", n - d);
}
