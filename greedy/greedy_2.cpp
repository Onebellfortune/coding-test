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

int main()
{
    int N,M;
    int num;
    vector<vector<int>> v;
    scanf("%d %d",&N,&M);
    //printf("%d %d\n",N,M);
    for(int i=0;i<N;i++){
        v.push_back(vector<int>());
        for(int j=0;j<M;j++){
            scanf("%d",&num);
            v[i].push_back(num);
        }
    }
    int answer=-1;
    for(int i=0;i<N;i++){
        sort(v[i].begin(),v[i].end());
        if(answer<v[i][0]){
            answer=v[i][0];
        }
    }
    printf("%d\n",answer);
    
    return 0;
}