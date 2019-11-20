#ifndef Pair-Structure-h
#define Pair-Structure-h
#include <cassert>
#include <string>
#include <utility>

void Pairstructure();

void Pairstructure()
{
  Pairstruture<double,string> strstr;
  strstr.one = 2.0;
  strstr.two = "Bart";
  Pair<int,string> strstr;
  strstr.first = 3;
  strstr.second = "Simpson";
  Pair<string,string>strstr;
  strstr.uno = "The";
  strstr.dos = "Simpsons";

} 
 #endif