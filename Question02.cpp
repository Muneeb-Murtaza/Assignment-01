#include <iostream>
using namespace std;
int main() {
   int Nfee,Pfee=2500;
   cout<<"The Currently Charges Are $2500"<<endl;
   cout<<"But in Next 6 Years Charges Will increase to 4%"<<endl;
   for(int i=1; i<=6; i++){
       Nfee=Pfee+(Pfee*0.04);
       Pfee=Nfee;
       cout<<"The Fee in Next "<<i<<" year= "<<Nfee<<endl;
   }
    return 0;
}
