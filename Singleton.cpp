#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    int data;

    Singleton() {
        data = 0;  // Initialize data in the constructor
    }

public:
    static Singleton* createInstance() {
        if (instance == NULL) {
            instance = new Singleton();
        }

        return instance;
    }

    void setData(int data) {
        this->data = data;
    }

    int getData() {
        return data;
    }

    // Define a destructor to release the instance if needed
    ~Singleton() {
        delete instance;
    }
};

Singleton* Singleton::instance = NULL;

int main() {
    Singleton* obj = Singleton::createInstance();
    obj->setData(5);
    cout << obj->getData() << endl;
    
    //This object will also contain the same data as only 1 object will be created
    Singleton* obj1 = Singleton::createInstance();
    int result = obj1->getData();
    cout<<result<<endl;
    
    return 0;
}
