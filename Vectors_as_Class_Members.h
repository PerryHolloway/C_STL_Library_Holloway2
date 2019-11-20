#ifndef Vectos_as_Class_Members_h
#define Vectos_as_Class_Members_h
#include <vector>
#include <iostream>
using namespace std;

//Function prototype
void Vectorclasses();

class MyClassUno {
  private:
    vector<int> bec;
  public:
    MyClassUno(vector<int> v) {
      bec = v;
    }
    void print() {
      for (int o : bec) {
        cout << o << " ";
      }
     cout << endl;
    }
};

class MyClassDos {
  private:
    vector<int> bec;
  public:
    MyClassDos(vector<int> v) : bec(v) {
      ;
    }
    void print() {
      for (int o : bec) {
        cout << o << " ";
      }
      cout << endl;
    }
};

class MyClassTres {
  private:
    vector<int>& bec;
  public:
    MyClassTres(vector<int>& v) : bec(v) {
      ;
    }
    void print() {
      for (int o : bec) {
       cout << o << " ";
      }
     cout << endl;
    }
};

void Vectorclasses() {
 vector<int> bec;
  for (int i = 1; i <= 10; i++) {
    bec.push_back(i);
  }
  MyClassUno obj1(bec);
  obj1.print();
  MyClassDos obj2(bec);
  obj2.print();
  MyClassTres obj3(bec);
  obj3.print();
}
#endif