/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int n;
   string plans;
   int x=1,y=1;
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    char moveTypes[4] = {'L', 'R', 'U', 'D'};
    cin >> n;
    cin.ignore();
    
    getline(cin, plans);
    //cout<<plans<<"\n";
    for(int i=0;i<plans.size();i++){
        char c=plans[i];
        int nx=-1,ny=-1;
        for(int dir=0;dir<4;dir++){
            if(c==moveTypes[dir]){
                nx=x+dx[dir];
                ny=y+dy[dir];
            }
        }
        
        if(nx<1||ny<1||nx>n||ny>n) continue;
        x=nx;
        y=ny;
    }
    cout << x << ' ' << y << '\n';
    return 0;
}