# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int n, m, k, r, c, d, rim;
    cin >> n >> m >> k;
 
    if(n - 1 >= k){
        r = 1 + k;
        c = 1;
    }
    else{
        k -= (n - 1);
        d = k / (m - 1);
        rim = k % (m - 1);
        if(rim == 0){
            if(d % 2 == 0){
                c = 2;
            }
            else{
                c = m;
            }
            r = n - (d - 1);
        }
        else{
            r = n - d;
            if(d % 2 == 0){
                c = 2 + (rim - 1);
            }
            else{
                c = m - (rim - 1);
            }
        }
    }
 
    cout << r << " " << c << endl;
 
 
    return 0;
}
