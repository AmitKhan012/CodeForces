# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int x, y;
    double rp, lp;
 
    cin >> x >> y;
 
    if(x == 1 && y == 1){
        cout << '=' << endl;
    }
    else if(x == 1){
        cout << '<' << endl;
    }
    else{
        rp = log(y * 1.0) / log(x * 1.0);
        rp = rp * x;
        lp = y * 1.0;
        if(lp < rp){
            cout << '<' << endl;
        }
        else if(lp > rp){
            cout << '>' << endl;
        }
        else{
            cout << '=' << endl;
        }
    }
 
 
    return 0;
}
