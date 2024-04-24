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
   void Yazdir(){
      cout<<ad<<endl;
      cout<<yas<<endl;
      cout<<boy<<endl;
   }
   Kisi(string a){
      ad=a;
      cout<<"yapici metot calisti"<<endl;

   }
   Kisi(string a, double s, int y){
      ad=a;
      yas=y;
      boy=s;
      cout<<"tek parametreli yapici metot calisti"<<endl;
   }
};

int main(){
    
    Kisi kisi1("Mert",19,174);
    kisi1.Yazdir();
    Kisi kisi2("Ahmet");
   
    
}

