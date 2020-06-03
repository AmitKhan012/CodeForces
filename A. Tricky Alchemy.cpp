# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
 
    long long int a, b, x, y, z, total, arequired, brequired, ans = 0;
    cin >> a >> b;
    cin >> x >> y >> z;
    arequired = x * 2 + y;
    brequired = y + z * 3;
 
    if(arequired > a){
        ans += (arequired - a);
    }
    if(brequired > b){
        ans += (brequired - b);
    }
 
    cout << ans << endl;
 
}
