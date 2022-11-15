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
long long int l;
vector<int> v;
int answer=0;
int num;
int A=0,B=0,C=0;
bool compare(int a, int b){return a<b;}


void input(){
    
    scanf("%lld",&l);
    
}

void solution(){
    long long int tmp=1;
    
    while(true){
        long long int multi=(long long int)(tmp*(tmp+1));
        if(multi>2*l) break;
        tmp++;
    }
    printf("%lld\n",tmp-1);
}


int main()
{
   input();
   solution();
    
}   