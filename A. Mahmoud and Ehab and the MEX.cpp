# include <iostream>
# include <cstdio>
# include <algorithm>
using namespace std;
 
int main(){
 
    int n, x;
    int arr[103];
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    if(x < arr[0]){
        printf("%d\n", x);
    }
    else if(x == arr[0]){
        printf("%d\n", 1 + arr[0]);
    }
    else if(x > arr[n - 1]){
        printf("%d\n", x - n);
    }
    else if(x == arr[n - 1]){
        printf("%d\n", x - n + 2);
    }
    else{
        for(int i = 1; i <= n - 1; i++){
            if(x == arr[i]){
                printf("%d\n", arr[i] - i + 1);
                break;
            }
            else if(x < arr[i]){
                printf("%d\n", x - i);
                break;
            }
        }
    }
 
    return 0;
}
