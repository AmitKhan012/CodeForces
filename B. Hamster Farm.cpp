# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    unsigned long long int n, k, a, i, type, amount, m = pow(10, 18);
    cin >> n >> k;
    for(i = 1; i <= k; i++){
        cin >> a;
        if(n % a < m){
            m = n % a;
            type = i;
            amount = n / a;
        }
    }
    cout << type << " " << amount << endl;
}
