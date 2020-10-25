#include<iostream>
using namespace std;

int gcd(int a, int b) {
  if(a == 0)
    return b;
  if(b == 0)
    return a;
  if(a == b)
    return a;
  return gcd(b, a%b);
}

int main() {
  int noT, result;
  cin >> noT;
  int arr[2*noT];
  for(int i=0; i<2*noT; i++) {
    cin >> arr[i];
  }
  for(int i=0; i<2*noT; i=i+2) {
    result = gcd(arr[i],arr[i+1]);
    cout << result << endl;
}
}
