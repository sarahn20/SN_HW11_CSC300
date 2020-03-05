#include "Spliterator.hpp"

Spliterator::Spliterator(string stringNum, string stringDelim)
{
    this->stringNum = stringNum;
    this->stringDelim = stringDelim;
    myDelim = "";
    myNum = "";
    bucket = 0;
    
}
string* Spliterator::split()
{
    int cool = stringNum.length();
    string myArr[cool];
    string* returnableArray = myArr;
    for(int i = 0; i < cool; i++)
    {
        for(int j = 0; j < stringDelim.length(); j++)
        {
            if(stringNum.at(i) == stringDelim.at(j)) //is delim
            {
                if(bucket != 0)
                {
                    bucket++;
                }
                myDelim = stringNum.at(i);
                if(myNum != "")
                {
                    myArr[bucket] = myNum;
                    myNum = "";
                    bucket++;
                }
                myArr[bucket] = myDelim;
                break;
            }
        }
        if(myDelim == "")
        {
            myNum = myNum + stringNum.at(i);
        }
        myDelim = "";
        
    }
    bucket++;
    myArr[bucket] = myNum;
    for(int v = 0; v < cool; v++)
    {
        cout << myArr[v] << " ";
    }
    return returnableArray;
}
