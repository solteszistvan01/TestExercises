#include <iostream>
#include <vector>
using namespace std;

struct f{
    bool b;

    f(bool b = 0): b(b){}

    void operator()(bool v) {
        int rv = (v + b) %2;
        cout << rv;}

};

template<class InputIt, class UnaryFunction>
 void for_eachh(InputIt first, InputIt last, UnaryFunction f){
    for (; first != last; ++first)
        f(*first);
    cout << "\n";
}

int main() {

    std::cout << "Hello, World!" << std::endl;
    vector<bool> arr1 = {0,1,1,0,0,1,1,1,1,0,0,0,1,0,1,1,1};
    vector<bool> arr2 = {1,0,0,1,0,1,1,0,0,0,0,1};

    vector<bool>::iterator iS = arr1.begin();
    vector<bool>::iterator iE = arr1.end();

    f function;
    f func = f(1);
    for_eachh(iS, iE, function);

    for_eachh(arr2.begin(), arr2.end(), func);

    return 0;
}
