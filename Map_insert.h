


#ifndef Map-Insert-h
#define Map-Insert-h
#include <cassert>
#include <string>
#include <map>
using namespace std;


void MapInser();


    map<string, int> GreekGods;
    // Inserting data in std::map
    GreekGods.insert(make_pair("Zeus", 1));
    GreekGods.insert(make_pair("Neptune", 2));
    GreekGods["Pluto"] = 3;
    // Will replace the value of already added key i.e. earth
    GreekGods["Venus"] = 4;
    // Iterate through all elements in std::map
    map<string, int>::iterator t = mapOfWords.begin();
    while(it != GreekGods.end())
    {
    cout<<it->first<<" :: "<<t->second<<endl;
        t++;
    }
    // Check if insertion is successful or not
    if(GreekGods.insert(make_pair("Zeus", 1)).second == false)
    {
    
    }
    // Searching element in std::map by key.
    if(GreekGods.find("Pluto") != GreekGods.end())
        
    if(GreekGods.find("mars") == GreekGods.end())
       