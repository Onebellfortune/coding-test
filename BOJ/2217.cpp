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
bool compare(int a, int b){return a<b;}


void input(){
    int tmp;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&tmp);
        v.push_back(tmp);
    }
}

void solution(){
    sort(v.begin(),v.end(),compare);
    // for(int i=0;i<N;i++){
    //     printf("%d ",v[i]);
    // }
    // printf("\n");
    for(int i=0;i<N;i++){
        answer=max(answer,(N-i)*v[i]);
    }
    printf("%d\n",answer);
}


int main()
{
   input();
   solution();
    
}   