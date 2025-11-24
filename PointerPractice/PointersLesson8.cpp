#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor invoked" << endl;
    }
    ~MyClass()
    {
        cout << "Destructor invoked" << endl;
    }
};
int main()
{
    /* unique_ptr<int> uniquePointer1 = make_unique<int>(30);

    // Will give an error!
    // unique_ptr<int> uniquePointer2 = uniquePointer1;
    unique_ptr<int> uniquePointer2 = move(uniquePointer1);

    cout << uniquePointer1 << endl;
    cout << *uniquePointer1 << endl;
    cout << *uniquePointer2 << endl; */
    {
        unique_ptr<MyClass> uniquePointer4 = make_unique<MyClass>();
    }
    return 0;
}