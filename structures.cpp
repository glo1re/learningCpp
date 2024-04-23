#include <iostream>

using namespace std;
struct Kisi{
    string ad;
    string soyad;
    int yas;
    double boy;
};
int main(){
    Kisi nesne;
    nesne.ad="Mert Efe";
    nesne.soyad="Cukurluoz";
    nesne.yas=19;
    nesne.boy=1.74;

    cout << "Nesne'nin bilgileri:"<<endl;
    cout <<nesne.ad<<endl;
    cout <<nesne.soyad<<endl;
    cout <<nesne.yas<<endl;
    cout << nesne.boy<<endl;
    
    return 0;
}
