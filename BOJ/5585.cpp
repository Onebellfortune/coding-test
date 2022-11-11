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
vector<int> v_a;
vector<int> v_b;
vector<string> v;
int answer=0;
int num;
bool compare(int a, int b){return a>b;}


void input(){

    scanf("%d", &num);
    num=1000-num;
    
}

void solution(){
    int answer=0;
    while(num>=500){
        num-=500;
        answer++;
    }
    while(num>=100){
        num-=100;
        answer++;
    }
    while(num>=50){
        num-=50;
        answer++;
    }
    while(num>=10){
        num-=10;
        answer++;
    }
    while(num>=5){
        num-=5;
        answer++;
    }
    while(num>=1){
        num-=1;
        answer++;
    }
    cout<<answer<<"\n";
}


int main()
{
   input();
   solution();
    
}   