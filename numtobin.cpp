#include <iostream>

using namespace std;
int main() {
  int b[10],n,i;
  cout<<"Masukan Angka : ";
  cin>>n;
  for(i=0; n>0; i++){
    b[i]=n%2;
    n=n/2;
  }
  cout<<" Hasil Binnary : ";
  for(i=i-1; i>=0; i--) {
    cout<<b[i];
  }
}
