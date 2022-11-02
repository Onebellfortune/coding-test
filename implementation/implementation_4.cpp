/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <set>
using namespace std;

int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
int arr[50][50];
int N,M;
int visited[50][50];
void check(int r, int c, int dir){
    
}


int main()
{
    int r,c,dir;
    scanf("%d %d",&N,&M);
    scanf("%d %d %d",&r,&c,&dir);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&arr[i][j]);
            visited[i][j]=0;
        }
    }    
    int cnt=1;
    int tmp=0;
    int next;
    visited[r][c]=1;
    while(true){
        
        for(int d=4;d>0;d--){
            next=(dir+d-1)%4;
            int nr=r+dr[next];
            int nc=c+dc[next];
            if(nr<0||nr>=N||nc<0||nc>=M){
                dir=next;
                continue;
            }
            if(arr[nr][nc]==1){
                dir=next;
                continue;
            }
            if(visited[nr][nc]!=1){
                r=nr;
                c=nc;
                cnt++;
                d=4;
                visited[nr][nc]=1;
            }else{
                dir=next;
                continue;
            }
        }
        
        next=(dir+2)%4;
        r=r+dr[next];
        c=c+dc[next];
        if(arr[r][c]==1) break;

    }
    printf("%d\n",cnt);
}