//Source: http://www.tutorialspoint.com/Iterators
#ifndef Iterators_h
#define Iterators_h
#include<vector>
#include<iostream>


void Iterators();

void Iterators(){
  vector<int> vint(10);
  vint[0]=1;
  vint[1]=2;
  vint[2]=3;
  vint[3]=4;
  vint[4]=5;
  vint[5]=6;
  vint[6]=7;
  vint[7]=8;
  vint[8]=9;
  vint[9]=10;
  vector<int>::iterator t;
  for(t = vint.begin(); t !=vint.end(); ++t){
    cout<< " " << *t;
  }
  cout <<endl;
}
#endif