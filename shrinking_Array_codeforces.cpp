// It is answer to B. Shrinking Array

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int size){
  for(int i = 1; i < size; i++){
    if (abs(arr[i]-arr[i-1]) < 2) {
      cout << 0 <<endl;
      return;
    }
  }

  for(int i = 1; i < size-1; i++){
    if(arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
      cout << 1 <<endl;
      return;
    };

    if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
      cout << 1 << endl;
      return;
    }
  }
  cout<< -1 << endl;
}

int main(){
  int n;
  cin>> n;

  for(int i = 0; i < n; i++){
    int size;
    cin>> size;
    vector<int> arr;
    for(int j = 0; j < size; j++){
      int n1;
      cin>>n1;
      arr.push_back(n1);
    }
    solve(arr, size);
  }
}