#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1;
  cin>>n1;
  vector<int> v1;
  int n;
  int j;
  int k;
  for(int i = 0; i < n1; i++){
    cin>>n;
    cin>>j;
    cin>>k;
    v1.clear();
    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      v1.push_back(x);
    }
    if(k>1){
      cout<<"YES"<<endl;
      continue;
    }
    int req = v1[j-1];
    sort(v1.begin(), v1.end());
    if(req == v1[n - 1]){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
} 