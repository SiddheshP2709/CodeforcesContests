#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1;
  cin>>n1;
  int n;
  for(int j = 0; j < n1; j++){
    cin>>n;
    vector<int> pre(n, 0);
    vector<int> suf(n, 0);
    vector<int> input(n, 0);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i = 0; i< n; i++){
      int x; 
      cin>>x;
      input[i] = x;
      mini = min(mini, x);
      pre[i] = mini;
    }

    for(int i = n-1; i >= 0; i--){
      maxi = max(maxi, input[i]);
      suf[i] = maxi;
    }

    for(int i = 0; i < n; i++){
      if(input[i] == pre[i] || input[i] == suf[i]){
        cout<<"1";
      }else{
        cout<<"0";
      }
    }
    cout<<endl;
  }
}