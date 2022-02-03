//https://codeforces.com/problemset/problem/144/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int n;cin>>n;
  //vector<int>t;
  pair<int,int>min1={INT_MAX,-1};
  pair<int,int>max1={INT_MIN,-1};
  for(int i=0;i<n;i++){
       int k;cin>>k;
    //   t.push_back(k);
      if(k>max1.first){
          max1.first=k;max1.second=i;
      }
      if(k<=min1.first){
           min1.first=k;min1.second=i;
      }
  }
  // int max1=*max_element((t.begin()).first,(t.end()).first);
  // int min1=*min_element((t.begin()).first,(t.end()).first);
  // cout<<max1.first<<" "<<max1.second<<" "<<min1.first<<" "<<min1.second;

  int swapmax=max1.second,swapmin=n-min1.second-1;
  if(max1.second>min1.second){
   cout<<swapmax+swapmin-1;
   }
   else cout<<swapmax+swapmin;
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
    // while(t--){problem();cout<<"\n";}
     return 0;
}