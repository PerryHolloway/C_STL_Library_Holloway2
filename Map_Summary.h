#ifndef map_Summary_h
#define map_Summary_h
#include <cassert>
#include <iostream>
#include <string>
#include <map>
using namespace std;

void mapSummary();

void mapSummary() {
  map<string, string> phone_book; 
  phone_book["321"] = "Directory";
  phone_book["911"] = "SOS";
  phone_book["485-982-0146"] = "BCC";
  if (phone_book.find("321") != phone_book.end()) { 
    phone_book.insert(make_pair(string("321"), string("Directory")));
  }
  assert(phone_book.size() == 3); 
  map<std::string, string>::const_iterator it;
  for (it = phone_book.begin(); it != phone_book.end(); ++it) { 
    cout << " " << it->first << " " << it->second << 
    endl;
  }
}
#endif