#include <bits/stdc++.h>
using namespace std;

int main(){
  int n1;
  cin>>n1;
  for(int j = 0; j < n1; j++){
    int n;
    cin>>n;
    map<int, int> mp;

    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      mp[x]++;
    }

    map<int, int> freq;
    int mex = 0;

    for(auto& [x, y]: mp){
      if(x == mex){
        mex++;
        freq[y]++;
      }
    }

    vector<int> ans(n+1, 0);
    ans[n] = 1;
    ans[0] = 1;
    for(int i = n-1; i > n - mex; i--){
      ans[i] = ans[i+1] + 1;
    }

    for(int i = 1; i < n; i++){
      if(ans[i]) break;
      ans[i] = ans[i-1] + freq[i];
    }

    for(int i = 0; i < n+1; i++){
      cout<< ans[i] << " ";
    }
    cout<<endl;
  }
}