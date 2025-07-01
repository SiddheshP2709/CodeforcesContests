#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    int n1;
    cin>>n1;
    if(n1 % 4 == 0){
      cout<<"Bob"<<endl;
    }else{
      cout<<"Alice"<<endl;
    }
  }
}