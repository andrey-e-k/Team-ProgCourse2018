#include "ChildrenShadow.h"

ChildrenShadow::ChildrenShadow(int iId, string sFirstName, string sSecondName, date structDateOfBirth)
{
    setId(iId);
    setFirstName(sFirstName);
    setSecondName(sSecondName);
    setDateOfBirth(structDateOfBirth);
}

void ChildrenShadow::setId(int iId)
    id=iId;
void ChildrenShadow::setFirstName(string sFirstName)
    firstName=sFirstName;
void ChildrenShadow::setFirstName(string sSecondName)
    secondName=sSecondName;
void ChildrenShadow::setFirstName(string structDateOfBirth)
    dateOfBirth=structDateOfBirth;

void ChildrenShadow::getId()
    cout << "ID: " << id << endl;
void ChildrenShadow::getFirstName()
    cout << "ID: " << firstName << endl;
void ChildrenShadow::getSecondName()
    cout << "ID: " << secondName << endl;
void ChildrenShadow::getDateOfBirth()
    cout << "ID: " << dateOfBirth.day << "." << dateOfBirth.month << "." << dateOfBirth.year << endl;
void ChildrenShadow::getAge()
    cout << "ID: " << dateOfBirth.day << "." << dateOfBirth.month << "." << dateOfBirth.year << endl;

ChildrenShadow::~ChildrenShadow(int iId, string sFirstName, string sSecondName, date dDateOfBirth)
{
    cout << "Вызов деструктора." << endl;
}
