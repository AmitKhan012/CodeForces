# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int n, i, ans = 0, t, sum = 0;
    vector <long long int> arr;
 
    cin >> n;
 
    for(i = 0; i < n; i++){
        cin >> t;
        arr.push_back(t);
    }
 
    sort(arr.begin(), arr.end());
 
    for(i = 0; i < n; i++){
        if(sum <= arr[i]){
            ans++;
            sum += arr[i];
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
