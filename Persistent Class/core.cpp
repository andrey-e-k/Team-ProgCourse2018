#include <iostream>
#include <string>
#include "ChildrenShadow.h"
#include "ChildrenFactory.h"

using namespace std;

int main()
{
    int    iId=0;
    string sFirstName= "Александр",
           sSecondName="Пушкин";
    date structDateOfBirth
    {
        structDateOfBirth.day=  12;
        structDateOfBirth.month=5;
        structDateOfBirth.year= 1876;
    }

    ChildrenShadow objChildrenShadow(iId, sFirstName, sSecondName, structDateOfBirth);
    ChildrenFactory(objChildrenShadow);
    return 0;
}
