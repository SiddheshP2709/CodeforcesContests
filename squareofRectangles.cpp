#include<bits/stdc++.h>
using namespace std;

void squareofRectangles(vector<int> v1){
  int i = 0;
  int l1 = v1[0];
  int b1 = v1[1];
  int l2 = v1[2];
  int b2 = v1[3];
  int l3 = v1[4];
  int b3 = v1[5];

  if(l1 == l2 && l2 == l3){
    if(b1+b2+b3 == l1){
      cout<<"YES"<<endl;
      return;
    } 
  }

  if(b1 == b2 && b2 == b3){
    if(l1+l2+l3 == b1){
      cout<<"YES"<<endl;
      return;
    }
  }

  if(l1 == l2){
    if(b1+b2 == b3 && l1+l3 == b3){
      cout<<"YES"<<endl;
      return;
    }
  }

  if(l2 == l3){
    if(b3+b2 == b1 && l1+l2 == b1){
      cout<<"YES"<<endl;
      return;
    }
  }

  if(l1 == l3){
    if(b1+b3 == b2 && l1 + l3 == b2){
      cout<<"YES"<<endl;
      return;
    }
  }

  
  if(b1 == b2){
    if(l1+l2 == l3 && b1+b3 == l3){
      cout<<"YES"<<endl;
      return;
    }
  }

  if(b2 == b3){
    if(l3+l2 == l1 && l1 == b1+b2){
      cout<<"YES"<<endl;
      return;
    }
  }

  if(b1 == b3){
    if(l1+l3 == l2 && l2 == b2+b3){
      cout<<"YES"<<endl;
      return;
    }
  }
  cout<<"NO"<<endl;
}

int main(){
  int n;
  cin>>n;
  vector<vector<int>> input;
  for(int i = 0; i < n; i++){
    vector<int> v1(6, 0);
    for(int i = 0; i < 6; i++){
      cin>> v1[i];
    }
    input.push_back(v1);
  }

  for(int i = 0;i < n; i++){
    squareofRectangles(input[i]);
  }
}