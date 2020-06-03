# include <iostream>
# include <cstdio>
# include <math.h>
using namespace std;
 
int main(){
 
    long long int a, b, d, f;
 
    cin >> a >> b;
 
    d = b - a;
 
    if(d == 0){
        printf("1\n");
    }
    else if(d >= 5){
        printf("0\n");
    }
    else{
        f = 1;
        for(long long int i = 1; i <= d; i++){
            f *= (a+i);
            f %= 10;
        }
        cout << f << endl;
    }
 
    return 0;
}
