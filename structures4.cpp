#include <iostream>
using namespace std;

struct Kisi{
    string ad;
    int yas;  
};

void YazdirValue(Kisi kisi1)
    {
        cout<<"ad :"<<kisi1.ad<<endl;
        cout<<"yas :"<<kisi1.yas<<endl;
    }

void YazdirReferance(Kisi *ptr)
    {
        cout<<"ad :"<<ptr->ad<<endl;
        cout<<"yas :"<<ptr->yas<<endl;
    }    

int main(){
   Kisi kisi1={"Mert",19};
   YazdirReferance(&kisi1);
   YazdirValue(kisi1);
    return 0;
}
