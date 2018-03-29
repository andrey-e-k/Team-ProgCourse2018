#include "ChildrenFactory.h"

ChildrenFactory::ChildrenFactory()
{
    cout << "Обычный конструктор ChildrenFactory" << endl;
}

void ChildrenFactory::create()
{
}
void ChildrenFactory::getUniqueId()
{
}
void ChildrenFactory::findById()
{
}
void ChildrenFactory::find()
{
}

ChildrenFactory::~ChildrenFactory(int iId, string sFirstName, string sSecondName, date dDateOfBirth)
{
    cout << "Вызов деструктора." << endl;
}
