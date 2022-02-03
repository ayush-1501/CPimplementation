#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  string s;cin>>s;
  for(char& c:s)if(c>='5')c='9'-(c-'0');
  if(s[0]=='0')s[0]='9';
  cout<<s<<"\n";
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
     //while(t--){problem();cout<<"\n";}
     return 0;
}