/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N;


struct compare{
    bool operator()(int a,int b){
        return a>b;
    }
};

priority_queue<int, vector<int>, compare> Q;

void input(){
    
    scanf("%d",&N);
    
    int num;
    for(int i=0;i<N;i++){
        scanf("%d",&num);
        Q.push(num);
    }
}

void solution(){
    int sum=0;
    if(N==1){
        printf("0\n");
        return;
    }
    while(Q.size()>1){
        int a=Q.top();
        Q.pop();
        int b=Q.top();
        Q.pop();
        sum+=a+b;
        Q.push(a+b);
    }
    printf("%d\n",sum);
}


int main()
{
   input();
   solution();
    
}   