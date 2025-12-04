
#include <iostream>
using namespace std;
int main() {
    int calories,min;
    for(int i=5; i<=30; i=i+5){
        min=i;
        calories=min*3.6;
        cout<<" clories burn in "<<i<< "  minutes= "<<calories<<endl;
    }
    return 0;
}
