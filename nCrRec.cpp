#include<iostream>
using namespace std;

float comb(int n,int r){
    if(r!=0)
    {
        return (n-r+1)*comb(n,r-1)/r;
    }
    else
    {
        return 1;
    }      
}

int main(){
    int n,r;
    float com;
    cout<<"Enter the values of n and r in nCr \n";
    cin>>n>>r;
    if(n-r>=r)
    {
        com = comb(n,r);
    }
    else
    {
        com = comb(n,n-r);
    }
    
    cout<<"The number of combinations is "<<com<<"\n";    
}