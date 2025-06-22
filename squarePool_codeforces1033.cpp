#include<bits/stdc++.h>
using namespace std;

void squarePool(vector<int>& v1, int s, int &count){
  int d1 = v1[0];
  int d2 = v1[1];
  int a = v1[2];
  int b = v1[3];
  if(a == b && a+b == s){
    count++;
    return;
  }
  if(a+b == s && d1 == (-1*d2)){
    count++;
    return;
  }
  if(a == b && d1 == d2){
    count++;
  }
}

void squarePool1(int n, int s, vector<int>& ans){

  vector<vector<int>> input(n, vector<int>(4));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 4; j++){
      cin>> input[i][j];
    }
  }

  int count = 0; 
  for(int i =0; i < n; i++){
    squarePool(input[i], s, count);
  }
  ans.push_back(count);
}

int main(){
  int n;
  cin>>n;
  vector<int> ans;
  for(int i = 0; i < n; i++){
    int n1;
    cin>> n1;
    int s1;
    cin>>s1;
    squarePool1(n1, s1, ans);
  }
  for(int i = 0; i < n; i++){
    cout<< ans[i]<<endl;
  }
}