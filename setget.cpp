#include <iostream>
using namespace std;
//struck'lar stack bölümü
//sınıflar heap bölümü

class Kisi{
   private:
   string ad;
   int yas;
   double boy;
   public:
   void setAd(string ad){
      this->ad=ad;

   }
   void setBoy(double boy){
      this->boy=boy;

   }
   void setYas(int yas){
      this->yas=yas;

   }
   string getAd(){
      return ad;
   }
   int getYas(){
      return yas;
   }
   double getBoy(){
      return boy;
   }
};

int main(){
    Kisi kisi1;
    kisi1.setAd("Erkam Seyit");
    kisi1.setBoy(180);
    kisi1.setYas(19);
    cout<<"Adi : "<<kisi1.getAd()<<endl;
    cout<<"Yasi : "<<kisi1.getYas()<<endl;
    cout<<"Boyu : "<<kisi1.getBoy()<<endl;


}

