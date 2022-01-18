#include <iostream>
#include <string>
using namespace std;

string hw = "hello World!";

int main(){
    cout << hw.substr(1, 3) << endl; // 提取字串，收尾都包含
    cout << hw[1] << endl;
    hw.replace(0, 5, "HELLO");  // 替换字串
    cout << hw << endl; 
}