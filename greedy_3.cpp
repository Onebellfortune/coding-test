#include <iostream>

using namespace std;

int main(){
    int N,K;
    int cnt=0;
    scanf("%d %d",N,K);

    while(true){
        int target=N-N%K;
        cnt+=(N-target);

        if(N<K) break;
        cnt++;
        N/=K;
    }

    cnt+=N-1;
    printf("%d\n",cnt);



}