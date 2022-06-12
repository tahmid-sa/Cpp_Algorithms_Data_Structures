#include <iostream>
#include <cstring>

using namespace std;

class C {
    public:
    C(char *s = "", int i = 0, double d = 1) {
        strcpy(dataMember1, s);
        dataMember2 = i;
        dataMember3 = d;
    }

    void memberFunction1() {
        cout << dataMember1 << " " << dataMember2 << " " << dataMember3 << endl;

        /*cout << dataMember1 << endl;
        cout << dataMember2 << endl;*/
    }

    void memberFunction2(int i, char *s = "unknown") {
        dataMember2 = i;
        cout << i << " received from " << s << endl;
    }

    //protected:
    char dataMember1[20];
    int dataMember2;
    double dataMember3;
};

template<class geneType, int size = 50>
class genClass {
    geneType storage[size];

/*void swap(genType& el1, genType& el2) {
    genType tmp = el1;
    el1 = el2;
    el2 = tmp;
}*/

};

int main() {
    C object1("object1", 100, 2000), object2("object2"), object3;

    cout << object3.dataMember1 << endl;
    cout << object3.dataMember2 << endl;
    cout << object3.dataMember3 << endl;

    object1.memberFunction1();
    object1.memberFunction2(123);
    object1.memberFunction2(123, "object1");

    genClass<int> intObject1;
    genClass<int, 100> intObject2;
    genClass<float, 123> floatObject;

    return 0;
}