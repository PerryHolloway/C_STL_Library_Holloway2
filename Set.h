#ifndef Set_h
#define Set_h
#include<cassert>
#include<iostream>
#include<set>
using namespace std;

void Set();

void Set()
{
  set<double> ready;
  ready.insert(3.6);
  ready.insert(4.9);
  ready.insert(6.8);
  ready.insert(2.1);
  if (ready.find(4.9) !=ready.end()){
    ready.insert(4.9);
  }
  assert(ready.size()==4);
  set<double>::iterator t;
  for(t=ready.begin();t !=ready.end(); ++t){
cout << "  " << *t;
  }
  cout << endl;
}
#endif