# include <iostream>
# include <cstdio>
# include <vector>
using namespace std;
 
int main(){
 
 
        int n, a, maximum = -1, ans = 0;
        vector <int> v;
        scanf("%d", &n);
        while(n--){
            scanf("%d", &a);
            if(maximum < a) maximum = a;
            v.push_back(a);
        }
        for(int i = 0; i < v.size(); i++){
            ans += (maximum - v[i]);
        }
        printf("%d\n", ans);
 
 
}
