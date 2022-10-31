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
void reverse(string& s, int cnt){
    //cout<<cnt<<"\n";
    for(int i=0;i<cnt/2;i++){
        char tmp=s[i];
        s[i]=s[cnt-i-1]; //s[0]=s[4];
        s[cnt-i-1]=tmp;
    }
    
}

void find_small(string s,int cnt, char& small){
    small='Z';
    for(int i=0;i<cnt;i++){
        if(small>s[i]) small=s[i];
    }
    //cout<<small<<"\n";
}

void find_big(string s,int cnt, char& big){
    big='A';
    for(int i=0;i<cnt;i++){
        if(big<s[i]) big=s[i];
    }
    //cout<<small<<"\n";
}



int main()
{
    set<string> S;
    string str;
    cin>>str;
    char small;
    char big;
    N=str.length();
    int inc=1;

    for(int i=1;i<N;i++){
        if(str[i-1]<str[i]){
            reverse(str,i);
            reverse(str,i+1);
        }
    }
    //cout<<str<<"\n";
    reverse(str,N);
    
    cout<<str<<"\n";
}