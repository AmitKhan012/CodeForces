# include <iostream>
# include <cstdio>
# include <string>
using namespace std;
 
int main(){
 
    string a = "I hate that ", b = "I love that ";
 
    int n;
    scanf("%d", &n);
    if(n == 1){
        cout << "I hate it" << endl;
        return 0;
    }
 
    for(int i = 1; i < n; i++){
        if(i % 2 == 0) cout << b;
        else cout << a;
    }
    if(n % 2 == 0) { cout << "I love it" << endl;}
    else cout << "I hate it" << endl;
 
}
