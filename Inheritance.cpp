#include <iostream>
using namespace std;
//struck'lar stack bölümü
//sınıflar heap bölümü

class Kisi{//base class
   public:
   string ad;
   string soyad;
   int yas;
   
};
class Ogrenci : public Kisi{//derived class
   public:
   string bolumu;
};

class Egitmen : public Kisi{
   public:
   int maas;

};

int main(){
    Ogrenci o1;
    o1.ad="Ahmet";
    o1.soyad="Su";
    o1.yas=25;
    o1.bolumu="bilgisayar muh";

    Egitmen e1;
    e1.ad="Bahadır";
    e1.soyad="Bacak";
    e1.yas=19;
    e1.maas=19000;

    cout<<o1.ad<<endl;
    cout<<o1.soyad<<endl;
    cout<<o1.yas<<endl;
    cout<<o1.bolumu<<endl;

    cout<<e1.ad<<endl;
    cout<<e1.soyad<<endl;
    cout<<e1.yas<<endl;
    cout<<e1.maas<<endl;
 
    
}

