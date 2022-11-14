/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N;
vector<int> v;
int answer=0;
int num;
int A=0,B=0,C=0;
bool compare(int a, int b){return a<b;}


void input(){
    
    scanf("%d",&N);
    
}

void solution(){
    while(true){
        if(N<300) break;
        N-=300;
        A++;
    }
    
    while(true){
        if(N<60) break;
        N-=60;
        B++;
    }
    
    while(true){
        if(N<10) break;
        N-=10;
        C++;
    }
    
    if(N!=0) printf("-1\n");
    else printf("%d %d %d\n",A,B,C);
}


int main()
{
   input();
   solution();
    
}   