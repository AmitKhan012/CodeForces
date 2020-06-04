# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int n, q, a, k, i, l, h, mid, died, total_arrow = 0;
    long long int cums[200005];
    cin >> n >> q;
    cums[0] = 0;
 
    for(i = 1; i <= n; i++){
        cin >> a;
        cums[i] = cums[i-1] + a;
    }
 
    for(i = 1; i <= q; i++){
        cin >> k;
        total_arrow += k;
        if(total_arrow >= cums[n]){
            cout << n << endl;
            total_arrow = 0;
            continue;
        }
        l = 1;
        h = n;
        while(l <= h){
            mid = (l + h) / 2;
            if(cums[mid] == total_arrow){
                died = mid;
                break;
            }
            else if(cums[mid] > total_arrow){
                if(cums[mid - 1] < total_arrow){
                    died = mid - 1;
                    break;
                }
                h = mid - 1;
            }
            else if(cums[mid] < total_arrow){
                if(cums[mid + 1] > total_arrow){
                    died = mid;
                    break;
                }
                l = mid + 1;
            }
        }
        cout << n - died << endl;
    }
 
    return 0;
}
