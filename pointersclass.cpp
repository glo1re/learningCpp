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
void yazdirPtr(Kisi * nesne){
      cout<<nesne->ad<<endl;
      cout<<nesne->soyad<<endl;
      cout<<nesne->yas<<endl;

   }
   void yazdir(Kisi nesne){
      cout<<nesne.ad<<endl;
      cout<<nesne.soyad<<endl;
      cout<<nesne.yas<<endl;
   }


int main(){
   Kisi nes1;
   nes1.ad="Mert";
   nes1.soyad="Oz";
   nes1.yas=21;
   
    
   Kisi * ptrNesne= new Kisi(); 
   ptrNesne->ad = "ahmet";
   ptrNesne->soyad = "vatan";
   ptrNesne->yas=20;

   //PtrNesne->ad="Merdo";
   //cout<<PtrNesne->ad<<endl;
   //PtrNesne->yazdir(nes1);
   //nes1.yazdir(nes1);
   yazdirPtr(ptrNesne);
   yazdir(nes1);
}

