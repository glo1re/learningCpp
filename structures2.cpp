#include <iostream>
using namespace std;

struct Adres{
    string sk;
    string apartman;
    string sehir;

    
};

struct Kisi{
    string ad;
    string soyad;
    int yas;
    double boy;
    Adres adr;
};
int main(){
    Kisi nesne;
    nesne.ad="Mert Efe";
    nesne.soyad="Cukurluoz";
    nesne.yas=19;
    nesne.boy=1.74;
    nesne.adr.sk="Kabatas sokagi";
    nesne.adr.apartman="Ali Baba Apart";
    nesne.adr.sehir="Kastamonu";

    cout << "Nesne'nin bilgileri:"<<endl;
    cout <<nesne.ad<<endl;
    cout <<nesne.soyad<<endl;
    cout <<nesne.yas<<endl;
    cout <<nesne.boy<<endl;
    cout <<nesne.adr.sk<<endl;
    cout <<nesne.adr.apartman<<endl;
    cout <<nesne.adr.sehir<<endl;
    
    return 0;
}
