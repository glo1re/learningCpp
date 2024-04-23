#include <iostream>
using namespace std;

struct Kisi{
    string ad;
    int yas;
    
};
int main(){
   Kisi kisi1={"Mert",19};
   cout<<kisi1.ad<<endl;
   cout<<kisi1.yas<<endl;
   Kisi *ptr=&kisi1;
   cout<<ptr->ad<<endl;
   cout<<ptr->yas<<endl;

    return 0;
}
