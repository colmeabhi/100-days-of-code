#include<iostream>
using namespace std;

long long int gcd_calc(long long int a, long long int b) {
  if(a == 0)
    return b;
  if(b == 0)
    return a;
  if(a == b)
    return a;
  return gcd_calc(b, a%b);
}

int main() {
  long long int noT, lcm, gcd;
  cin >> noT;
  long long int arr[2*noT];
  for(int i=0; i<2*noT; i++) {
    cin >> arr[i];
  }
  for(int i=0; i<2*noT; i=i+2) {
    gcd = gcd_calc(arr[i],arr[i+1]);
    lcm = (arr[i]*arr[i+1])/gcd;
    cout << lcm << endl;
  }
}
