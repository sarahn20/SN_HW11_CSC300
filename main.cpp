#include<string.h>
#include "Spliterator.hpp"
#include<iostream>

using namespace std;

int main()
{
    Spliterator* mySplitter = new Spliterator("123/42-356","+-*/");
    mySplitter->split();
    return 0;
}
