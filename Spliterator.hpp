#ifndef Spliterator_hpp
#define Spliterator_hpp
#include<string.h>
#include<iostream>

using namespace std;

class Spliterator
{
private:
    string stringNum;
    string stringDelim;
    string myDelim;
    string myNum;
    int bucket;
    
    
public:
    Spliterator(string stringNum, string stringDelim);
    string* split();
    
    
};
#endif
