#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
 
	int length[1004] = {0};
	int N, tower = 0, highest = 1, len;
	scanf("%d", &N);
	while(N--){
		scanf("%d", &len);
		if(length[len] == 0){
			tower++;
			length[len]++;
		}
		else{
			length[len]++;
			if(length[len] > highest){
				highest = length[len];
			}
		}
 
	}
	printf("%d %d\n", highest, tower);
	
	return 0;
}
