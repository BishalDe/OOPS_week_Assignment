#include <iostream>
using namespace std;
class base {
public:
virtual void show(){
cout << "show base class" << endl;
}
void print(){
cout << "print base class" << endl;
}
};
class derived : public base {
public:
void show(){
cout << "show derived class" << endl;
}
void print(){
cout << "print derived class" << endl;
}

};
int main(){
base* bpointr;
derived dev;
bpointr = &dev;
bpointr->show();
bpointr->print();
return 0;
}