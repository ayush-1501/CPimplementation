#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
    string s;cin>>s;int count=0;
     for(int i=0;i<s.size();i++){
       if(s[i]!='0'){
           count++;
       }
    }
    cout<<count<<"\n";
    for(int i=0;i<s.size();i++){
       if(s[i]!='0'){
           cout<<(s[i]-'0')*pow(10,s.size()-i-1)<<" ";
       }
    }
    
}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;cin>>t;
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
     while(t--){problem();cout<<"\n";}
     return 0;
}