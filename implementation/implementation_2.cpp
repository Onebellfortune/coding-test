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
    int N;
    int cnt=0;
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
      for(int j=0;j<60;j++){
        for(int k=0;k<60;k++){
          int a=i/10;
          int b=i%10;
          int c=j/10;
          int d=j%10;
          int e=k/10;
          int f=k%10;
          if(a==3||b==3||c==3||d==3||e==3||f==3)
            cnt++;
        }
      }
    }
    printf("%d\n",cnt);
    return 0;
}