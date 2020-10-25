#include<iostream>
using namespace std;

int main() {
  int n, flag = 0;
  cin >> n;
  int no[n];
  for(int i=0; i<n; i++) {
    cin >> no[i];
  }
  for(int i=0; i<n; i++) {
    for(int j=2; j<=(no[i]/2); j++) {
      if(no[i]%j == 0) {
        cout << "No" << endl;
        flag = 0;
        break;
      }
      else
        flag = 1;
    }
    if(flag == 1)
      cout << "Yes" << endl;
  }
  return 0;
}
