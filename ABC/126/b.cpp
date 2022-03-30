#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main(){
    int S;
    cin>>S;
    
    int aa=S/100;
    int bb=S%100;
    
    bool f1=aa>=1&&aa<=12;
    bool f2=bb>=1&&bb<=12;
    
    if(f1&&f2) cout<<"AMBIGUOUS"<<endl;
    else if(f1) cout<<"MMYY"<<endl;
    else if(f2) cout<<"YYMM"<<endl;
    else cout<<"NA"<<endl;
}