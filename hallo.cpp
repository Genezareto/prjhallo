#include <iostream>
#include <string>
using namespace std;

int main() {
string nama[5];
for(int i=0; i<5;i++){
    cout<<"Masukan nama "<<i+1<<" : ";
    getline(cin,nama[i]);
    cin.ignore();
}
cout<<"===Daftar nama==="<<endl;
for(int a=0;a<5;a++){
    cout<<a+1<<". "<<nama[a]<<endl;
}
  return 0;
}