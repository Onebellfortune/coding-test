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

int r;
int arr[5];
int tmp[5];
int visit[5];

void dfs(int idx,int level){
    if(level==r+1){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=tmp[i];
        }
        if(sum==0){
            for(int i=0;i<r;i++){
                printf("%d ",tmp[i]);
            }
        }
        //printf("\n");
    }else{
        for(int i=idx;i<5;i++){
            if(visit[i]==0){
                visit[i]=1;
                tmp[level-1]=arr[i];
                dfs(i+1,level+1);
                visit[i]=0;
                
            }
        }
    }
}


int main()
{
    
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=5;i++){
        r=i;
        dfs(0,1);
    }
    
    
}   