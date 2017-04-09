#include <iostream>
#include <vector>
#include <initializer_list>

template<class T>
class TestClass {
public:

    TestClass(std::initializer_list<T> l): data(l) {
        for(auto d : data){
            std::cout << d << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<T> data;

};

int main(){

    TestClass<int> t {1, 2, 3, 4, 5, 6};

    return 0;
}