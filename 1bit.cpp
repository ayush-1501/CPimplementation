#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
    int n;cin>>n;
    vector<string>ans;
    string k;
    for(int i=0;i<n;i++){
       cin>>k;
       ans.push_back(k);
    }
    int count=0;
    for(auto i:ans){
        if(i[0]=='-' or i[2]=='-'){
           count--;
        }
        else if(i[0]=='+' or i[2]=='+'){
            count++;
        }
    }
  cout<<count;
}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int t;cin>>t;
      #ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
      #endif
     #ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
    problem();
     return 0;
}