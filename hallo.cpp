#include <iostream>
#include <string>
using namespace std;

int main() {
    double tugas,uts,uas,rata;
    cout<<"Input Nilai Tugas";
    cin>>tugas;
    cout<<"Input Nilai UTS";
    cin>>uts;
    cout<<"Input Nilai UAS";
    cin>>uas;
    rata=((tugas*0.20)+(uts*0.30)+(uas*0.50));
    if(rata>100){
        cout<<"Nilai terlalu tinggi";
    }else if(rata>=85){
        cout<<"selamat anda mendapatkan A";
        }else if(rata>=70){
        cout<<"selamat anda mendapatkan B";
        }else if(rata>=60){
        cout<<"Okelah anda mendapatkan C";
        }else if(rata>=40){
        cout<<"WOW anda mendapatkan D";
        }else if(rata>=0){
        cout<<"WOW anda mendapatkan F";
        }else{
            cout<<"rendehnya";
        }

    
    
  return 0;
}