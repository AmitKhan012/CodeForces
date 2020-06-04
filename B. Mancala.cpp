# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int m, r, d, j, ans = 0;
    long long int a[14], b[14];
 
    for(int i = 0; i < 14; i++){
        cin >> a[i];
    }
 
    for(int i = 0; i < 14; i++){
        if(a[i] != 0){
            for(j = 0; j < 14; j++){
                if(j != i){
                    b[j] = a[j];
                }
                else{
                    b[j] = 0;
                }
            }
            d = a[i] / 14;
            r = a[i] % 14;
            for(j = 0; j < 14; j++){
                b[j] += d;
            }
            j = i + 1;
            while(j < 14 && r > 0){
                b[j]++;
                j++;
                r--;
            }
            j = 0;
            while(r > 0){
                b[j]++;
                j++;
                r--;
            }
            m = 0;
            for(j = 0; j < 14; j++){
                if(b[j] % 2 == 0){
                    m += b[j];
                }
            }
            if(ans < m){
                ans = m;
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
