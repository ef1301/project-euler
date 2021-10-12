#include <iostream>

using namespace std;
int problem1(int n) {
  int sum=0;
  for(int i=3; i<n; i+=3)
    if(i%5!=0) sum+=i;
  for(int i=5; i<n; i+=5) sum+=i;
  return sum;
}

int problem2(int n) {
  int x=0,y=1,z, sum=0;
  while(y <= n) {
    z = x + y;
    x = y;
    y = z;
    if(y%2==0) sum += y;
  }
  return sum;
}

int problem3()

int main() {
  cout << problem1(1000) << endl;
  cout << problem2(4000000) << endl;
  return 0;
}
