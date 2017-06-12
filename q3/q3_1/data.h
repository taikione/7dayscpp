#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData{
private:
    int number;
    string comment;
public:
    //  初期化
    void init();
    void setNumber(int n);
    void setComment(string s);

    int getNumber();
    string getComment();
};

#endif // _CDATA_H_
