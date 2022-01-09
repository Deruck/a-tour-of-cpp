#include "Vector_container.h"
#include <iostream>
using namespace std;

void use(Container &c){
    const int sz = c.size();

    for (int i = 0; i != sz;++i){
        cout << c[i] << ' ';
    }
    cout << endl;
}


int main(){
    Vector_container vc={10, 9, 8, 1, 3, 3, 4, 5};
    use(vc);
}
