# include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, index;
 
    scanf("%d", &n);
 
    int arr[n];
 
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
 
    sort(arr, arr + n);
 
    if(n - 1 % 2 == 0){
        index = n / 2;
        printf("%d\n", arr[index]);
    }
    else{
        index = (n - 1) / 2;
        printf("%d\n", arr[index]);
    }
 
    return 0;
}
