#ifndef VectorH
#define VectorH
#include<vector>
#include<string>
#include<iostream>
using namespace std;

void sector();

void sector()
{
  vector<double> vd;
  vector<int> vi;
  vector<string> vs;
  vd.push_back(8.6);
  vd.push_back(6.9);
  vd.push_back(4.2);
  vi.push_back(76);
  vi.push_back(32);
  vi.push_back(21);
  vs.push_back("Zeus");
  vs.push_back("Appolo");
  vs.push_back("Hermes");
  cout <<"Pair 1: vi" << endl;
  for (int e:vi){
    cout<< e << endl;
  }
  cout<<"Pair 2: vd" << endl;
 for (double r: vd){
   cout << r << endl;
 }
 cout <<"Pair 3: vs" << endl;
 for(string y: vs){
   cout << y << endl;
 }
}
#endif