/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <set>
using namespace std;
int N;
int dc[8]={-2,-1,1,2,2,1,-1,-2};
int dr[8]={-1,-2,-2,-1,1,2,2,1};
int cnt=0;

void check(int r,int c){
    for(int dir=0;dir<8;dir++){
        int nr=r+dr[dir];
        int nc=c+dc[dir];
        if(nr>=0&&nr<8&&nc>=0&&nc<8) cnt++;
    }
}


int main()
{
    int chess[8][8];
    char str[10];
    scanf("%s",str);
    int c=str[0]-'a';
    int r=str[1]-'1';
    
    check(r,c);
    printf("%d\n",cnt);
}