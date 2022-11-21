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
string N;


bool compare(int a, int b){return a>b;}


void input(){
    cin>>N;
    
}

void solution(){
    int three=0;
    int zeros=0;
    vector<char> v;
    for(int i=0;i<N.length();i++){
        three+=N[i]-'0';
        v.push_back(N[i]);
        if(N[i]=='0'){
            zeros++;
        }
    }
    sort(v.begin(),v.end(),compare);
    
    //cout<<three<<"\n";
    //cout<<zeros<<"\n";
    if(three%3==0&&zeros>0){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
    }else{
        cout<<-1;
    }
    cout<<"\n";
}


int main()
{
   input();
   solution();
    
}   